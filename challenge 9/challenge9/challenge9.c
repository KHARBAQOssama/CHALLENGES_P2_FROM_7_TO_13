#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool isPremier(A){
     int i;
     bool result;
     result=1;
     for(i=2;i<A;i++){
        if(A%i==0){
            result=0;
            printf("ce nombre n'est pas premier");
        }else{
            printf("ce nombre est premier");
        }
        break;
     }

 }

 int main(){
     int A;
     printf("entrer le nombre que vous voulez tester :");
     scanf("%d",&A);
     isPremier(A);
     return 0;
 }
