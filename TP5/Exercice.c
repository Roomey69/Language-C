#include <stdio.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

int multiplication(int x , int y){
    return x*y;
}

int addition(int x, int y){
    return x+y;
}

int pgcd(int nbr1, int nbr2)
{
    if (nbr2 != 0)
       return pgcd(nbr2, nbr1%nbr2);
    else 
       return nbr1;
}

int NombreRationnel(){
    
    int n1,n2,d1,d2,a,b,c,d;

    n1 = input("Entrez le numerateur du rationnel 1 : ");
    d1 = input("Entrez le denominateur du rationnel 1 : ");
    n2 = input("Entrez le numerateur du rationnel 2 : ");
    d2 = input("Entrez le denominateur du rationnel 2 : ");
    
    a = multiplication(n1,n2)/pgcd(multiplication(n1,n2),multiplication(d1,d2)); // Numérateur mutiplication
    b = multiplication(d1,d2)/pgcd(multiplication(n1,n2),multiplication(d1,d2)); // Dénominateur multiplication
    c = addition(multiplication(n1,d2),multiplication(n2,d1))/pgcd(addition(multiplication(n1,d2),multiplication(n2,d1)),multiplication(d1,d2)); // Numérateur addition
    d = multiplication(d1,d2)/pgcd(addition(multiplication(n1,d2),multiplication(n2,d1)),multiplication(d1,d2)); // Dénominateur addition

    if ( b == 1 ){
        printf("La mutiplication est egale a : %d\n",a);
    }else{
        printf("La mutiplication est egale a : %d/%d\n",a,b);
    }

    if ( d == 1 ){
        printf("L'addition est egale a : %d", c);
    }else{
        printf("L'addition est egale a : %d/%d", c,d);
    }

}

int main(){

    NombreRationnel();

    return 0;
}


