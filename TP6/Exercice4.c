#include <stdio.h>
#include <stdlib.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void sum_product_tableau(int tab[]){

    int i,sum=0,product=1,len = input("Entrez la taille de la liste : ");
    tab = calloc(len,sizeof(int)*len);

    for( int i=0 ; i<len ; i++ ){
        tab[i] = input("Entrez votre entier : ");
    }

    for( int i=0 ; i<len ; i++ ){
        sum += tab[i];
    }
    printf("La somme de la liste est : %d\n",sum);

    for( int i=0 ; i<len ; i++ ){   
        product *= tab[i];
    }
    printf("Le produit de la liste est : %d\n",product);

}

int main(){

    int tab;
    sum_product_tableau(&tab);

    return 0;
}
