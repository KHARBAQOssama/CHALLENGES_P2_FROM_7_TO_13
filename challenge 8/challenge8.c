#include <stdio.h>
#include<stdlib.h>

void echange(float A, float B){

    float a = B,b=A;

    printf("A=%.2f\n",a);
    printf("B=%.2f",b);
}

int main(){
    float A,B;
    printf("entrer A:");
    scanf("%f",&A);
    printf("entrer B:");
    scanf("%f",&B);
    echange(A,B);
    return 0;
}
