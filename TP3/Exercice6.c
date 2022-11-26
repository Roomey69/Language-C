#include <stdio.h>

// FONCTIONNEL

int main(){
     
    int i;
    float note,sum;

    for( i=1 ; i<=3 ; i++ ){
        printf("Saisissez votre note numero %d : ",i);scanf("%f",&note);
        while ( note > 20 || note < 0 ){
            printf("Saisissez votre note numero %d : ",i);scanf("%f",&note);
        }
        sum+=note;
    }
    printf("La moyenne des notes est : %f",sum/3);

    return 0;
}
