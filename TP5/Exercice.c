#include <stdio.h>

struct rationnel
{
    int n,d;
};

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

    struct rationnel r1,r2;

    int a,b,c,d;

    r1.n = input("Entrez le numerateur du rationnel 1 : ");
    r1.d = input("Entrez le denominateur du rationnel 1 : ");
    r2.n = input("Entrez le numerateur du rationnel 2 : ");
    r2.d = input("Entrez le denominateur du rationnel 2 : ");
    
    a = multiplication(r1.n,r2.n)/pgcd(multiplication(r1.n,r2.n),multiplication(r1.d,r2.d)); // Numérateur mutiplication
    b = multiplication(r1.d,r2.d)/pgcd(multiplication(r1.n,r2.n),multiplication(r1.d,r2.d)); // Dénominateur multiplication
    c = addition(multiplication(r1.n,r2.d),multiplication(r2.n,r1.d))/pgcd(addition(multiplication(r1.n,r2.d),multiplication(r2.n,r1.d)),multiplication(r1.d,r2.d)); // Numérateur addition
    d = multiplication(r1.d,r2.d)/pgcd(addition(multiplication(r1.n,r2.d),multiplication(r2.n,r1.d)),multiplication(r1.d,r2.d)); // Dénominateur addition

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


