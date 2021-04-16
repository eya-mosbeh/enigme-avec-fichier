
#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include <time.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include "enigme.h"
typedef struct
{
int tabl[5];
int numenigme;
SDL_Surface* imgenigme;
char reponse[10];
char repjoeur[10];
}enigme;



void generer_enigmes(enigme *e,char fichier[]);
void afficherEnigme(SDL_Surface *ecran,enigme* e);

#endif // ENIGME_H_INCLUDED
