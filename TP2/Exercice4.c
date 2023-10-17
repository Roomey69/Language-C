#include <stdio.h>

// FONCTIONNEL

void exo10(){

    int nb;

    printf("Entrez un nombre entier : ");scanf("%d",&nb);
    printf("La valeur de ce nombre au carre est : %d",nb*nb);

}

void exo11(){

    int A,B,i,sum=0;

    printf("Saisissez l'entier A puis l'entier B : ");scanf("%d %d",&A, &B);
    for(i=A;i<=B;i++){
        sum+=i; 
    }
    printf("La somme des valeurs entre %d et %d est %d.",A,B,sum);

}

void exo12(){

    int nb;

    printf("Entrez un nombre entier : ");scanf("%d",&nb);
    for( int i=1 ; i<2*nb ; i+=2 ){
        printf("%d\n",i);
    }
    
}


void exo13(){

    int nb,i=1;

    printf("Entrez un nombre entier : ");scanf("%d",&nb);
    while( i <= nb ){
        printf("%d\n",i);
        i+=2;
    }

}

void exo14(){

    int res=1,n=0;

    printf("Entrez un nombre entier : ");scanf("%d",&n);
    for( int i=1 ; i<=5 ; i++ ){
        res*=n;
    }
    printf("Le nombre a la puissance 5 est : %d", res);

}

int main(){

    exo12();
    
    return 0;
}
