#include<stdio.h>

extern int start;
extern int dep_g;
extern int dep_d;
extern int launch;
int numero_ligne;
int position_ligne_depart;

void position_finale(int position_ligne_depart, int numero_ligne)
{
	int x;
	int y;
	x = position_ligne_depart;
	y = numero_ligne;
	printf("le jeton sera positionné sur la colonne %d\n", x);
	printf("le jeton sera positionné sur la ligne %d\n", y);
}



void panneau_led()
{
	if(start == 1)
	{
		//placement jeton de départ
		position_ligne_depart = 4;
		printf("%d\n", position_ligne_depart);
		start = 0;
	}
	if(dep_g == 1)
	{
		//déplacement du jeton à gauche
		position_ligne_depart -= 1;
		printf("%d\n", position_ligne_depart);
		dep_g = 0;
	}
	if(dep_d == 1)
	{
		//déplacement du jeton à droite
		position_ligne_depart += 1;
		printf("%d\n", position_ligne_depart);
		dep_d = 0;
	}
	if(launch == 1)
	{
		//appel de la fonction position_finale
		position_finale(position_ligne_depart, numero_ligne);
		printf("jeton laché!!!\n");
		launch = 0;

	}
}

