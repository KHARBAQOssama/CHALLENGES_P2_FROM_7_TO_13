#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

float divededby(float n,int a){ //une fonction qui retoune la division des deux valeurs.
    float A;
    A=n/a;
    return A;
}


//float B;
bool isPremier(int B){
//     B=divededby; //Utilisation de la fonction dividedby() pour contrôler si le nombre est premier
     bool result;
     result="true";
     for(int i=2;i<=B/2;i++){

        if(B%i==0){
             result="false";
        }
        break;}


        if (result="false"){
            printf("\nce nombre n'est pas premier");
        }

        else{
            printf("\nce nombre est premier");
        }
 }

 int main(){
     int n,a;
     printf("entrer le premier nombre :");
     scanf("%d",&n);
     printf("entrer le premier nombre :");
     scanf("%d",&a);
     printf("le resultat est %.2f",divededby(n,a));
     //divededby(n,a);
     isPremier(divededby(n,a));

     return 0;
 }
