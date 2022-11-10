#include <stdio.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void change_var(int *a,int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

void change_var2(int a, int b){

    a = a - b;
    b = a + b;
    a = b - a;

}

int main(){
    
    int x = input("Entrez la valeur de a : "),y = input("Entrez la valeur de b : ");

    printf("%d %d\n",x,y);
    change_var(&x,&y);
    //change_var2(x,y);
    printf("%d %d",x,y);

    return 0;
}
