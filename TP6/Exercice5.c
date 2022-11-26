#include <stdio.h>

// FONCTIONNEL

float input(char phrase[]){
    float x;
    printf("%s",phrase);scanf("%f",&x);
    return x;
}

struct Point{ 
    float x,y;
};

void change_val(struct Point *s1,struct Point *s2){

    struct Point stemp;

    stemp = *s1;
    *s1 = *s2;
    *s2 = stemp;
    
}

int main(){

    struct Point p1,p2;

    p1.x = input("Entrez x1 : "); p1.y = input("Entrez y1 : ");
    p2.x = input("Entrez x2 : "); p2.y = input("Entrez y2 : ");

    printf("x1 = %f y1 = %f | x2 = %f y2 = %f\n",p1.x , p1.y , p2.x , p2.y);
    change_val(&p1,&p2);
    printf("x1 = %f y1 = %f | x2 = %f y2 = %f\n",p1.x , p1.y , p2.x , p2.y);

    return 0;
}
