#include <stdio.h>

// FONCTIONNEL

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void bidimensional(){

    int list[3][4];

    for ( int i=0 ; i<3 ; i++ ){
        printf("\n| %de ligne |\n\n",i+1);      
        for ( int n=0 ; n<4 ; n++){        
            list[i][n] = input("Entrez votre entier : ");
        }        
    }
    
    for ( int i=0 ; i<3 ; i++ ){
        printf("\n| ");
        for ( int n=0 ; n<4 ; n++ ){
            printf("%d | ",list[i][n]);
        }  
    }printf("\n");
}   

int main(){
    
    bidimensional();

    return 0;
}
