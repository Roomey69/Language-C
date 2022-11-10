#include <stdio.h>

int carre(int x){
    return x*x;
}

int main(){
    
    int nb,i=0,sum=0;
    printf("Entrez le nombre de pierre  : ");scanf("%d",&nb);
    while ( sum-1 < nb ){
        i++;
        sum+=carre(i);
    }  
    printf("%d etages sont possibles",i-1);
    
    return 0;
}

