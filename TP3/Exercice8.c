#include <stdio.h>

int input(){
    int x;
    printf("Entrez votre nombre : ");scanf("%d",&x);
    return x;
}

int main(){
    
    int num = input();
    
    while( num%2 != 0 || num%7 != 0 ){
        num = input();
    }

    return 0;
}
