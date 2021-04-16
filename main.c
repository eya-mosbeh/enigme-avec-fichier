#include "enigme.h"
int main()
{
enigme e;

int i=0;
SDL_Surface *screen=NULL;
SDL_Surface *wrong=NULL;
SDL_Surface *right=NULL;
SDL_Rect rights;
rights.x=0;
rights.y=0;

SDL_Rect wrongs;
wrongs.x=0;
wrongs.y=0;
wrong=IMG_Load("thumbs down.png");
right=IMG_Load("thumbs up.png");

if(SDL_Init(SDL_INIT_VIDEO)!=0)
{
printf("unable t initialize SDL: %s /n",SDL_GetError());
}

screen=SDL_SetVideoMode(800,600,0,SDL_HWSURFACE | SDL_DOUBLEBUF);
if(screen==NULL)
{
printf("unable to set video mode: %s /n",SDL_GetError());
}

do
{

generer_enigmes(&e,"enigmes");
afficherEnigme(screen,&e);

if(strcmp(e.reponse,e.repjoeur)==0)
{

SDL_BlitSurface(right,NULL,screen,&rights);
SDL_Flip(screen);
SDL_Delay(1000);

}
else if (strcmp(e.reponse,e.repjoeur)!=0)
{

SDL_BlitSurface(wrong,NULL,screen,&wrongs);
SDL_Flip(screen);
SDL_Delay(1000);

//strcpy(e->repjoeur,"");
}
printf("rep %s repj %s\n",e.reponse,e.repjoeur);
i++;
}while(i!=5);





SDL_Quit();
}
