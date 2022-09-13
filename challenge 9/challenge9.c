#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int A;
bool isPremier(A){
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

int main (){
    printf("entrer kle nombre que vou voulez tester :");
    scanf("%d",&A);
    if (A<=1){
    printf("le nombre n'est pas premier");
    }else{
    isPremier(A);}
    return 0;
}
