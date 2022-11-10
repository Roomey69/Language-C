#include <stdio.h>

int main(){
    
    int L, l;
    
    printf("Entrez la largeur puis la longeur : \n");scanf("%d %d", &L,&l);
    printf("Perimetre : %d\n", (2*l)+(2*L));
    printf("Aire : %d",l*L);
    
    return 0;
}
