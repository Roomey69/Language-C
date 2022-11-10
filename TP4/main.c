#include <stdio.h>
#include <D:\ING1\Language C\TP4\getmax.h>

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

float calculAire(int l, int L){
    return l*L;
}

float calculPerimetre(int l, int L){
    return (2*l)+(2*L);
}

int multiple(int a, int b){
    if ( a%b == 0 ){
        return 1;
    }else{
        return 0;
    }
}

char multiple3(int nb){
    if( nb%3 == 0 ){
        printf("%d est un multiple de 3 ",nb);
    } else{
        printf("%d n'est pas un multiple de 3 ",nb);
    }
    if( nb >= 10 ){
        printf("et est superieur ou egal a 10.");
    }else{
        printf("et n'est pas superieur ou egal a 10.");
    }
}

float average3(int a, int b, int c){
    if ( a,b,c >= 0 && a,b,c <=20 ){
        return (a+b+c)/3;
    }else{
        return -1;
    }
}

int nb_eleves(){

    int i,sum=0,nbc,nbe;
    nbc = input("Entrez le nombre de classes ouvertes : ");
    for (i = 1; i < nbc+1 ; i++ ){
        nbe = input("Entrez le nombre d'eleves dans la classe ");
        sum+=nbe;
    }
    return sum;
}

void multiple73(){

    int num = input("Entrez votre nomrbre : ");
    
    while( num%2 != 0 || num%7 != 0 ){
        num = input("Entrez votre nomrbre : ");
    }
}

int carre(int x){
    return x*x;
}

char etage(){

    int nb,i=0,sum=0;

    nb = input("Entrez le nombre de pierre : ");
    while ( sum-1 < nb ){
        i++;
        sum+=carre(i);
    }  
    printf("%d etages sont possibles",i-1);

}

float average(){

    int i=0,sum=0,num=0;

    while (num >= 0){
        sum+=num;
        num = input("Entrez votre nombre : ");
        i++;
    }
    sum = sum/(i-1);
    return sum;

}

int main(){
    int x,y;

    //printf("%d\n",getMax(x = input("Entrez le 2eme entier : "), y = input("Entrez le 1er entier : ")));
    //printf("%f %f\n",calculAire(4,2),calculPerimetre(4,2));
    //printf("%s",multiple3(input("Entrez votre nombre : ")));
    //printf("%f",average3(12,13,14));
    //printf("Il y a un total de %d eleves.",nb_eleves());
    //multiple73();
    //printf("%s",etage());
    //printf("La moyenne des nombres est : %f",average());
    
    return 0;
}
