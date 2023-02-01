#include <stdio.h>
#include <stdlib.h>

// FONCTIONNEL

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

float average(int *tab, int *len){

    int average=0;
    *len = input("Entrez la taille de la liste : ");
    *tab = (int)calloc(*len, *len*sizeof(int) );

    for ( int i=0 ; i<*len ; i++ ){
        tab[i] = input("Entrez votre entier : ");
        average += tab[i];
    }

    return (float)average/(float)*len;
}

int main(){
    
    int *tab, len = 0;
    printf("%f\n",average(tab,&len));

    for(int i=0 ; i<len ; i++){
        printf("[%d]",tab[i]);
    }

    free(tab);

    return 0;
}