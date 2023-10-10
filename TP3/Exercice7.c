#include <stdio.h>

// FONCTIONNEL

int main(){
    
    int nbc,nbe,sum=0;

    printf("Entrez le nombre de classes ouvertes : ");scanf("%d",&nbc);
    for ( int i = 1; i < nbc+1 ; i++ ){
        printf("Entrez le nombre d'eleves dans la classe %d : ",i);scanf("%d",&nbe);
        sum+=nbe;
    }
    printf("Il y a un total de %d eleves.",sum);

    return 0;
}
