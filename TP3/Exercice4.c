#include <stdio.h>
#include <string.h>

int main(){
    
    int age;
    char student[4];

    printf("Entrez votre age : "); scanf("%d",&age);
    if ( age > 17 && age < 27){
        printf("Etes vous etudiant, oui ou non ? "); scanf("%s",&student);
        if(strcmp(student,"oui") == 0){
            printf("Le tarif jeune est de 6 euros.");
        }else{
            printf("Le plein tarif est de 9 euros.");
        }
    }else if( age < 12 ){
        printf("Le tarif enfant est de 4 euros.");
    }else if ( age >= 12 && age <= 17  ){
        printf("Le tarif jeune est de 6 euros.");
    }else if ( age >= 65 ){
        printf("Le tarif senior est de 6 euros.");
    }else{
        printf("Le plein tarif est de 9 euros.");
    }
    
    return 0;
}
