#include <stdio.h>

// FONCTIONNEL

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void exo2(int *a,int *b,int *quotient,int *reste){ // Passage par adresse utile

    *a = input("Entrez a : ");
    *b = input("Entrez b : ");
    *reste = *a % *b;
    *quotient = *a / *b;

}

int exo2bis(int a, int b, int *quotient){ // Passage par valeur inutile

    int reste;

    a = input("Entrez a : ");
    b = input("Entrez b : ");
    printf("%d\n",a/b);
    reste = a%b;

    return reste;
}

int main(){
    
    int x,y,quo,rest;

    //exo2(&x,&y,&quo,&rest);printf("%d\n%d", quo, rest);
    //printf("%d",exo2bis(x,y,&quo));

    return 0;
}
