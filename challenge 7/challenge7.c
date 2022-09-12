#include<stdio.h>
#include<stdlib.h>

void add(float A,float B){ //une fonction qui permet de faire l'addition des deux nombres a et b

    printf("la somme des deux nombres est %.2f", A+B);

}
int main(){
    float A,B; // A  et B sont des nombres
    printf("entrer le premier nombre : ");
    scanf("%f",&A);
    printf("entrer le deuxieme nombre : ");
    scanf("%f",&B);
    add(A,B);

    return 0;
    }
