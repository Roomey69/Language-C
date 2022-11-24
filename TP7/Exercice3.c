#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void random(int n, int i,int *nb){
    srand((unsigned int)time(NULL));
    *nb = n + (rand() % i-n+1);
}

int main(){

    int nb,n = input("Entrez votre 1er entier : ") ,i = input("Entrez votre 2eme entier : ");
    random(n,i,&nb);
    int search = input("Entrez le nombre a devine : ");

    do {
        if ( search < nb ){
            printf("C'est plus grand !\t");
            search = input("Entrez le nombre a deviner : ");
        }else if( search > nb){
            printf("C'est plus petit !\t");
            search = input("Entrez le nombre a deviner : ");
        }
    } while ( search != nb );
    printf("Vous avez trouve !");

    return 0;
}