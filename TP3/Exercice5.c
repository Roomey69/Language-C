#include <stdio.h>
#include <string.h>

int main(){
    
    int num;
    char distributeur[][11] = { "86","Champomy","Redboule","","","","","","","Saucemichi","Chouffe" };

    printf("Entrez le numero de la boisson : ");scanf("%d",&num);
    if( num <= 0 || num > 11 || strcmp(distributeur[num-1],"") == 0 ){
        printf("T'es louche ou koi ? Mauvais numero de boisson...");
    }else{
        printf("%s",distributeur[num-1]);
    }
    
    return 0;
}

