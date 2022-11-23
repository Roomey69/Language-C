#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void random(int n, int i){
    srand((unsigned int)time(NULL));
    printf("%d", n + (rand() % i));
}

int main(){

    int n = input("Entrez votre 1er entier : ") ,i = input("Entrez votre 2eme entier : ");
    random(n,i);

    return 0;
}
