#include<stdio.h>
#include<stdint.h>
#include "panneau_led_form.h"
#include "pupitre_form.h"
#include <pthread.h>
#include <time.h>

void *threadled(void *arg);

int main()
{

	pthread_t pthreadpupitre;
	pthread_t pthreadled;

	pthread_create(&pthreadpupitre, NULL, threadpupitre, NULL);
	pthread_create(&pthreadled, NULL, threadled, NULL);



	while(1)
	{
	int jetonPos = 4;
	int Joueur =1;
	pupitre();
	print_grille(4, 25);
	print_jeton(4,25,jetonPos,Joueur);
	//position_finale (0);
	}
	return 0;
}
