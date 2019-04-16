#include<stdio.h>

extern int start;
extern int dep_g;
extern int dep_d;
extern int launch;
int numero_ligne = 6;
int position_ligne_depart;

void position_finale(int position_ligne_depart, int numero_ligne)
{
	int x;
	int y;
	int j;
	int i;
	x = position_ligne_depart;
	y = numero_ligne;
	printf("le jeton sera positionné sur la colonne %d\n", x);
	printf("le jeton sera positionné sur la ligne %d\n", y);

	//impression de l'écran avec jeton laché
	printf("I-------I");
	for (i = 0; i <= 5 ; i++)
	{
		printf("\n");
		for (j = 0; j <= 8; j++)
		{
			if ((j == 0) || (j == 8))
				printf("I");
			else if ((j == x) && (i == y-1))
				printf("O");
			else
				printf(" ");
		}
	}
	printf("\nIIIIIIIII");



}

void panneau_led()
{
	int i;
	int j;
	int k;

	if(start == 1)
	{
		//placement jeton de départ
		position_ligne_depart = 4;
		printf("%d\n", position_ligne_depart);
		printf("I---0---I");

		//impression de l'écran vide
		for (i = 0; i <= 5 ; i++)
		{
			printf("\n");
			for (j = 0; j <= 8; j++)
			{
				if ((j == 0) || (j == 8))
					printf("I");
				else
					printf(" ");
			}
		}
		printf("\nIIIIIIIII");

		start = 0;
	}
	if(dep_g == 1)
	{
		//déplacement du jeton à gauche
		position_ligne_depart -= 1;
		printf("%d\n", position_ligne_depart);

		//impression du nouveau placement
		for (k = 0; k <= 8; k++)
		{
			if ((k == 0) || (k == 8))
				printf("I");
			else if (k == position_ligne_depart)
				printf("O");
			else
				printf("-");
		}

		//impression de l'écran vide
		for (i = 0; i <= 5 ; i++)
		{
			printf("\n");
			for (j = 0; j <= 8; j++)
			{
				if ((j == 0) || (j == 8))
					printf("I");
				else
					printf(" ");
			}
		}
		printf("\nIIIIIIIII");

		dep_g = 0;
	}
	if(dep_d == 1)
	{
		//déplacement du jeton à droite
		position_ligne_depart += 1;
		printf("%d\n", position_ligne_depart);

		//impression du nouveau placement
		for (k = 0; k <= 8; k++)
		{
			if ((k == 0) || (k == 8))
				printf("I");
			else if (k == position_ligne_depart)
				printf("O");
			else
				printf("-");
		}

		//impression de l'écran vide
		for (i = 0; i <= 5 ; i++)
		{
			printf("\n");
			for (j = 0; j <= 8; j++)
			{
				if ((j == 0) || (j == 8))
					printf("I");
				else
					printf(" ");
			}
		}
		printf("\nIIIIIIIII");

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

