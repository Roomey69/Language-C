#include <stdio.h>
#include <stdlib.h>

// FONCTIONNEL

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

int main(){
    
    int len = input("Entrez la taille de la liste : "),*tab = calloc(len,sizeof(int)*len);

    printf("[");
    for ( int i=0 ; i<len ; i++ ){
        printf(" %d ",tab[i]);
    }printf("]");

    free(tab);
    return 0;
}