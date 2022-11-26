#include <stdio.h>

// FONCTIONNEL

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

int main(){
    
    int x = input("Entrez la valeur de a : "),y = input("Entrez la valeur de b : ");

    printf("%d %d\n",x,y);
    change_var(&x,&y);
    //change_var2(x,y);
    printf("%d %d",x,y);

    return 0;
}
