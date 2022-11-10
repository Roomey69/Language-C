#include <stdio.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void bidimensional(){

    int n,i, list[3][4];

    for ( i=0 ; i<3 ; i++ ){       
        for ( n=0 ; n<4 ; n++){        
            list[i][n] = input("Entrez votre entier : ");
        }        
    }
    
    for ( i=0 ; i<3 ; i++ ){
        printf("\n| ");
        for ( n=0 ; n<4 ; n++ ){
            printf("%d | ",list[i][n]);
        }  
    }   
}   

int main(){
    
    bidimensional();

    return 0;
}
