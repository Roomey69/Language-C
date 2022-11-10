#include <stdio.h>

int main(){

    char c1, c2, temp;

    printf("Entrez la valeur de carac1 puis carac2 : ");scanf("%c %c",&c1,&c2);
    printf("carac1 = %c carac2 = %c\n", c1,c2);

    temp = c2;
    c2 = c1;
    c1 = temp;
    
    printf("carac1 = %c carac2 = %c", c1,c2);
    
    return 0;
}

