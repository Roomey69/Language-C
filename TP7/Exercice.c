#include <stdio.h>

int occurence(char phrase[],char c[]){

    int occurence, i = 0;

    while ( phrase[i] != '\0' ){
        if ( phrase[i] == c[0] ){
            occurence++;
        }
        i++;
    }
    return occurence;
}

int main(){

    char phrase[100], caractere;

    printf("Entrez votre caractere : ");scanf("%c",&caractere);
    printf("Entrez votre phrase : ");scanf("%[^\n]%*c", phrase);

    printf("%d",occurence(&phrase,&caractere));

    return 0;
}
