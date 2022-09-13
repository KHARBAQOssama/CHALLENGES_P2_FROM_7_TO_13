#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
//    float A;
float divededby(float n,int a)//une fonction qui retourne la division des deux valeurs.
{
    float A;
    A=n/a;

    return A;
}

bool isPremier(A)// pour contrôler si le nombre est premier
{
  bool result;
  result=true;
  for (int i=2;i<=A/2;i++){
    if (A%i==0){
        result=false;
    break;
    }
  }
  if (result==true){
    printf("le nombre A est premier");
  }
  else{
    printf("le nombre n'est pas premier");
  }

}
 int main(){
     int n,a,A;
     printf("entrer le premier nombre :");
     scanf("%d",&n);
     printf("entrer le premier nombre :");
     scanf("%d",&a);
     printf("le resultat est %.2f\n",divededby(n,a));
     A=divededby(n,a);
     isPremier(A);

     return 0;
 }
