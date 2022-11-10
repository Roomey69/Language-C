#include <stdio.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void sum_product_tableau(int liste[]){

    int i,sum=0,product=1,nb = 0;

    while ( liste[i] ){
        nb++;i++;
    }

    for( int i=0 ; i<nb ; i++ ){
        sum += liste[i];
    }
    printf("La somme de la liste est : %d\n",sum);

    for( int i=0 ; i<nb ; i++ ){   
        product *= liste[i];
    }
    printf("Le produit de la liste est : %d\n",product);

}

int main(){

    int len,i,tableau[len = input("Entrez la taille de la liste : ")];

    for( i=0 ; i<len ; i++ ){
        tableau[i] = input("Entrez votre entier : ");
    }

    sum_product_tableau(&tableau);

    return 0;
}
