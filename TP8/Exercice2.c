#include <stdio.h>
#include <stdlib.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

float average(int tab[]){

    int average=0 , len = input("Entrez la taille de la liste : ");
    tab = calloc(len,sizeof(int)*len);

    for ( int i=0 ; i<len ; i++ ){
        tab[i] = input("Entrez votre entier : ");
        average += tab[i];
    }
    free(tab);

    return (float)average/(float)len;
}

int main(){
    
    int tab;
    printf("%f",average(&tab));

    return 0;
}