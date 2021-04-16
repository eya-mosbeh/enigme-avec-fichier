prog:main.o enigme.o
	gcc main.o enigme.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g 
main.o:main.c
	gcc -c main.c 
enigme.o:enigme.c
	gcc -c enigme.c
