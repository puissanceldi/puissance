#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>





void print_grille(int posx, int posy)
{
    int lignes=0;
    mvprintw(posx+lignes, posy, "| | | | | | | |");
    mvprintw(posx+lignes+1, posy, "               ");
    while(lignes+2 < 8)
    {
        mvprintw(posx+lignes+2, posy, "| | | | | | | |");
        lignes++;
    }
}

void print_jeton(int posx,int posy,int place,int joueur)
{
    mvprintw(posx, posy, "| | | | | | | |");
    if (joueur == 1)
    mvprintw(posx, posy+(place*2-1), "X");
    else
	mvprintw(posx, posy+(place*2-1), "O");



}
void position_finale (int colonne)
{
	int grille[7][7];
	char col = colonne;
	int lig = 6; //initialisation au numéro de ligne la plus basse;


	//calcul de la ligne
	for (lig=6; lig>0; lig--)
	{
		if (grille[lig][col] != 'O')
		{
			grille[lig][col] = 'O';
			break;
		}
	}
}
