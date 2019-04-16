/*
 * fil_rouge_main.c
 *
 *  Created on: 15 avr. 2019
 *      Author: daugustin
 */


#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

#define NB_COLONNES 7
#define NB_LIGNES 6

#define  VIDE ' '

#define TRUE 1
#define FALSE 0

typedef struct Case_jeu Case;
struct Case_jeu
{
	int horizontale;
	int verticale;
	int gauche;
	int droite;
};

char plateau[NB_COLONNES][NB_LIGNE];


int main()
{

	 int verif_start()
	 {
		 if (start==1)
			 return 1;
	 }
	 int verif_dep_g()
	 {
		 if (dep_g==1)
			 return 1;
	 }
	 int verif_dep_d()
	 {
		 if (dep_d ==1)
			 return 1;
	 }
	 int launch()
	 {
		 if (launch == 1)
			 return 1;
	 }
	 //memorisation du plateau et de l'emplacement des jetons







	 //Fonction qui verifie si 4 pion sont alignés
	 int win(char plateau[NB_COLONNES][NB_LIGNES])
	 {
		 Case plateau[NB_COLONNES][NB_LIGNES];
		 int ligne;
		 int colonne;

		 for(ligne= 0; ligne<NB_LIGNES;ligne++)
		 {
			 for (colonne=0; colonne<NB_COLONNES;colonne ++)
			 {
				// 1 pion sur 4 aligner correctement(base pour commencer a verifier si pion suivant ressemble a la base)
				 plateau[colonne][ligne].horizontale = 1;//pion en horizontale true
				 plateau[colonne][ligne].verticale = 1;//pion en verticale true
				 plateau[colonne][ligne].gauche = 1;//pion en gauche true
				 plateau[colonne][ligne].droite = 1;//pion en droit true
			 }
		 }
		 //verification en horizontale
		 for (ligne = 0; ligne<NB_LIGNES;ligne ++)
		 {
			 for (colonne = 1; colonne<NB_COLONNES; colonne++)
			 {
				 if ((plateau[colonne][ligne]==(plateau[colonne-1][ligne]))&&(plateau[colonne][ligne]!= VIDE))//si le jeton que l'on verifie et le meme que le precedent et que la case est differente de vide
				{
					 plateau[colonne][ligne].horizontale=game[colonne][ligne-1].horizontale+1;//on dit que c'est les mêmes
						 if (plateau[colonne][ligne].horizontale==4)//si les 4 jetons sont de la meme couleur on renvoi true( on s'en servira plus bas dans un do while)
							 return TRUE;
				}
			 }
		 }
		 //verfication verticale
		 for (ligne = 1; ligne<NB_LIGNES; ligne++)
		 {
			 for(colonne= 0; colonne<NB_COLONNES; colonne++)
			 {
				 if ((plateau[colonne][ligne]==plateau[colonne][ligne-1])&&(plateau[colonne][ligne-1] != VIDE))//verif si jeton est identique et si la case n'est pas vide
				 {
					 plateau[colonne][ligne].verticale==plateau[colonne][ligne-1].verticale+1;//les 2 jetons se ressemblent
					 	 if(plateau[colonne][ligne].verticale==4)//si les 4 jetons ont la même couleur on retourne vrai(on s'en servira plus bas dans un do while)
					 		 return TRUE;
				 }
			 }

		 }


	 }

}
