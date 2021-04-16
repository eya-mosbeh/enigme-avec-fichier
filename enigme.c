#include "enigme.h"


void generer_enigmes(enigme *e,char fichier[])
{
int i=0;
FILE* f;
srand(time(NULL));
do
{
  e->numenigme=rand()%5;
}
while (e->tabl[e->numenigme]==1);
e->tabl[e->numenigme]=1;

f=fopen(fichier,"r");
while((fscanf(f,"%s\n",e->reponse)!=EOF)&&(i!=e->numenigme))
{
  i++;
}
fclose(f);
}


void afficherEnigme(SDL_Surface *ecran,enigme* e)
{

	SDL_Surface *texte=NULL;

	SDL_Rect positiont;
	positiont.x = 10;
positiont.y = 10;
	SDL_Surface *temps=NULL;
	TTF_Font *police =NULL;
	int continuer =1;
SDL_Rect position1;
	int i;
	char l;
	char chaine[23];
	sprintf(chaine,"enigmes%d.png",e->numenigme);
	e->imgenigme=IMG_Load(chaine);

SDL_Rect posi;
posi.x=0;
posi.y=0;
SDL_BlitSurface(e->imgenigme,NULL,ecran,&posi);
SDL_Flip(ecran);
	char mot[100]={0};
	SDL_Event event;
	SDL_Rect position;
position.x = 398;
position.y = 520;
	SDL_Color couleur={178,34,34};
	SDL_Color couleurn={0,0,0};
	int z=0;
	TTF_Init();

	police = TTF_OpenFont("angelina.ttf",28);



	while (continuer)
	{

	SDL_WaitEvent(&event);
	switch(event.type)
	{


		case SDL_KEYDOWN:
			switch(event.key.keysym.sym)
			{
				case SDLK_RETURN :
				continuer=0;
		break;

case SDLK_KP0 :
l='0';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);

SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;


case SDLK_KP1 :
l='1';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;


case SDLK_KP2 :
l='2';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_KP3 :
l='3';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;


case SDLK_KP4 :
l='4';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_KP5:
l='5';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_KP6:
l='6';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_KP7:
l='7';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_KP8:
l='8';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_KP9:
l='9';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_a:
l='a';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);

SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_b:
l='b';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_c:
l='c';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_d:
l='d';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_e:
l='e';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_f:
l='f';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_g:
l='g';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_h:
l='h';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_i:
l='i';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_j:
l='j';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_k:
l='k';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_l:
l='l';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_m:
l='m';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_n:
l='n';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;

case SDLK_o:
l='o';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_p:
l='p';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_q:
l='q';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_r:
l='r';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_s:
l='s';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_t:
l='t';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_u:
l='u';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_v:
l='v';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_w:
l='w';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_x:
l='x';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_y:
l='y';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_z:
l='z';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;


break;

case SDLK_SPACE:
l=' ';
mot[z]=l;
strcpy(e->repjoeur,mot);
z++;
texte = TTF_RenderText_Blended(police,mot,couleur);
position1.x = 0;
position1.y = 0;
SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
if (position.x>=328)
position.x=position.x-5;

break;
case SDLK_BACKSPACE:
z--;
mot[z]='\0';
strcpy(e->repjoeur,mot);
texte = TTF_RenderText_Blended(police,mot,couleur);
if (position.x<=398)
position.x=position.x+5;

SDL_BlitSurface(e->imgenigme, NULL, ecran, &position1);
SDL_BlitSurface(texte, NULL, ecran, &position);
SDL_Flip(ecran);
break;

}
}

}

TTF_CloseFont(police);
TTF_Quit();
SDL_FreeSurface(texte);



}
