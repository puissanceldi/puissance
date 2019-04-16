#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char bouton;

int start = 0;
int dep_g = 0;
int dep_d = 0;
int launch = 0;

int commande(char choix)
{
	switch (choix)
	{
	case 's':
		start = 1;
		return start;
		break;
	case 'd':
		dep_d = 1;
		return dep_d;
		break;

	case 'g':
		dep_g = 1;
		return dep_g;
		break;

	case 'b':
		launch = 1;
		return launch;
		break;
	}
return 0;
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







