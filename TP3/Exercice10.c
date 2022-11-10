#include <stdio.h>
#include <stdlib.h>
int input(){
    int x;
    printf("Entrez votre nombre : ");scanf("%d",&x);
    return x;
}

float average(){

    int i=0,sum=0,num=0;

    while (num >= 0){
        sum+=num;
        num = input();
        i++;
    }
    sum = sum/(i-1);
    return sum;

}

int main(){
    
    printf("La moyenne des nombres est : %f",average());

    return 0;
}
