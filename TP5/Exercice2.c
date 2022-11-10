#include <stdio.h>
#include <stdlib.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int tableau(){

    int nb = input("Entrez la taille de la liste : "),i,max,list[nb];

    for( i=0 ; i<nb ;i++ ){
        list[i] = input("Entrez votre entier : ");
    }

    qsort(list, nb, sizeof(int), compare); 
    max = list[nb-1];

    return max;
}

int main(){

    printf("%d",tableau());

    return 0;
}

