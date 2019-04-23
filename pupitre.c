#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


char bouton;
typedef int bool

bool start;
bool dep_g;
bool dep_d;
bool launch;

bool commande(char choix)               /*Commandes du pupitre*/
{
	 start = false;						/*  Démarrer le jeu  */
	 dep_g = false;						/* déplacement gauche du jeton */
	 dep_d = false;                     /* déplacement droit du jeton */
	 launch = false;                    /* Lâcher du jeton */

	switch (choix)                      /* Choix de la saisie */
	{
	case 's':
		start = true;
		return true;
		break;
	case 'd':
		dep_d = true;
		return true;
		break;

	case 'g':
		dep_g = true;
		return true;
		break;

	case 'b':
		launch = true;
		return true;
		break;
	}
return false;
}
void pupitre()
{
	printf("Entrez votre choix : \n");
	scanf ("%s", &bouton);
	commande(bouton);
	/*if (start == 1)
	{
		printf("partie commence \n");
		printf("\n %d \n",start);
	}
	if (dep_d == 1)
	{
		printf("droite\n");
		printf("\n%d\n",dep_d);
	}
	if (dep_g == 1)
	{
		printf("gauche \n");
		printf("\n %d \n",dep_g);
	}
	if (launch == 1)
	{
		printf("lâcher \n");
		printf("\n %d \n",launch);
	}*/
}







