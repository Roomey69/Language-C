#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// REVOIR CAR CELA N'INITIALISE PAS LE TABLEAU 
// FAIRE EN SORTE DE POUVOIR UTILISER LA FONCTION AFFICHAGE ET RANDOM DANS LE MAIN
// REVOIR LES PARAMETRES DES FONCTIONS

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void free_tab(int len_l,int *tab[]){

    for ( int i=0 ; i<len_l ; i++ ){
        free(tab[i]);
    }
    free(tab);    

}

void random(int len_l, int len_c,int tab[len_l][len_c]){

    for ( int i=0 ; i<len_l ; i++ ){
        for ( int j=0 ; j<len_c ; j++ ){
            tab[i][j] = rand() % 256;
        }
    }

}

void affichage(int len_l, int len_c,int tab[len_l][len_c]){

    for ( int i=0 ; i<len_l ; i++ ){
        printf("\n");
        for ( int j=0 ; j<len_c ; j++ ){
            printf("[%d]",tab[i][j]);
        }
    }printf("\n");

}

void init_matrix(int len_l, int len_c,int *tab[]){

    tab = calloc(len_l,sizeof(int*)*len_l);
    for ( int i=0 ; i<len_l ; i++ ){
        tab[i] = calloc(len_c,sizeof(int)*len_c);
    }

}

int main(){

    srand(time(NULL));

    int tab;
    int len_l = input("Entrez le nombre de ligne de la liste : ");
    int len_c = input("Entrez le nombre de colonne de la liste : ");

    init_matrix(len_l,len_c,tab);
    random(len_l,len_c,tab);
    affichage(len_l,len_c,tab);
    
    free_tab(len_l,tab);
    return 0;
}