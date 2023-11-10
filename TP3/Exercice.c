#include <stdio.h>

// FONCTIONNEL

int main(){

    int a,b;
    
    printf("Entrez l'entier A puis l'entier B : ");scanf("%d %d", &a, &b);
    printf("%d", ( a>b ) ? a : b);   

    return 0;
}

