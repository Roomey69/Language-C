#include <stdio.h>

int main(){
    
    int nb;

    printf("Entrez un entier : "); scanf("%d",&nb);
    if( nb%3 == 0 ){
        printf("%d est un multiple de 3 ",nb);
    }else{
        printf("%d n'est pas un multiple de 3 ",nb);
    }
    if( nb>=10 ){
        printf("et est superieur ou egal a 10.");
    }else{
        printf("et n'est pas superieur ou egal a 10.");
    }

    return 0;
}