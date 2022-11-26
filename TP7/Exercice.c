#include <stdio.h>

// FONCTIONNEL AVEC UN MOT ; VOIR POUR SCANF LES ESPACES

int occurence(char phrase[],char c){

    int occurence=0, i = 0;

    while ( phrase[i] != '\0' ){
        if ( phrase[i] == c ){
            occurence++;
        }
        i++;
    }
    return occurence;
}

int main(){

    char phrase[100], caractere;

    printf("Entrez votre caractere : ");scanf("%c",&caractere);
    printf("Entrez votre phrase : ");scanf("%s",phrase);

    printf("%d",occurence(phrase,caractere));

    return 0;
}
