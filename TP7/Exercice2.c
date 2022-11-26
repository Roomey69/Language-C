#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FONCTIONNEL

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

int random(int n, int i){
    return n + (rand() % i-n+1);
}

int main(){

    int n = input("Entrez votre 1er entier : ") ,i = input("Entrez votre 2eme entier : ");
    srand(time(NULL));
    printf("Le nombre random genere entre %d et %d est %d",n,i,random(n,i));

    return 0;
}
