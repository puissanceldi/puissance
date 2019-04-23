#include<stdio.h>

extern int start;
extern int dep_g;
extern int dep_d;
extern int launch;
int ligne;
int colonne;
int i;
int j;
int k;
int col;
int lig;
extern char grille[7][7];//grille[ligne][colonne]

void position_finale (int colonne)
{

	col = colonne;
	lig = 6; //initialisation au numéro de ligne la plus basse;


	//calcul de la ligne
	for (lig=6; lig>0; lig--)
	{
		if (grille[lig][col] != 'O')
		{
			grille[lig][col] = 'O';
			break;
		}
	}

	//impression de la grille sans la ligne de placement
	for (lig = 1; lig <7; lig++)
		{
			printf("\n");
			for (col = 0; col < 7; col++)
			{
				printf("%c", grille[lig][col]);
			}
		}
}

void panneau_led()
{

	if(start == 1)
	{
		//placement jeton de départ
		colonne = 3;
		grille[0][colonne] = 'O';

		//impression de la grille avec la ligne de placement
		for (lig=0; lig < 7; lig++)
		{
			printf("\n");
			for (col = 0; col < 7; col++)
			{
				if ((lig == 0) && (col != colonne))
				{
				grille[lig][col] = '~';
				printf("%c", grille[lig][col]);
				}
				else
				{
				printf("%c", grille[lig][col]);
				}
			}
		}
		start = 0;
	}

	if(dep_g == 1)
	{
		//déplacement du jeton à gauche
		colonne -= 1;
		if (colonne < 0)
		{
			printf("cette commande n'est pas valide");
		}
		else
		{
			grille[0][colonne] = 'O';
			//impression de la grille avec la ligne de placement
			for (lig=0; lig < 7; lig++)
			{
				printf("\n");
				for (col = 0; col < 7; col++)
				{
					if ((lig == 0) && (col != colonne))
					{
					grille[lig][col] = '~';
					printf("%c", grille[lig][col]);
					}
					else
					{
					printf("%c", grille[lig][col]);
					}
				}
			}
		}
		dep_g = 0;
	}

	if(dep_d == 1)
	{
		//déplacement du jeton à droite
		colonne += 1;
		if (colonne >= 7)
		{
			printf("cette commande n'est pas valide");
		}
		else
		{
		grille[0][colonne] = 'O';
			//impression de la grille avec la ligne de placement
			for (lig=0; lig < 7; lig++)
			{
				printf("\n");
				for (col = 0; col < 7; col++)
				{
					if ((lig == 0) && (col != colonne))
					{
					grille[lig][col] = '~';
					printf("%c", grille[lig][col]);
					}
					else
					{
					printf("%c", grille[lig][col]);
					}
				}
			}
		}
		dep_d = 0;
	}

	if(launch == 1)
	{
		//appel de la fonction position_finale
		position_finale(colonne);
		launch = 0;
	}
}

