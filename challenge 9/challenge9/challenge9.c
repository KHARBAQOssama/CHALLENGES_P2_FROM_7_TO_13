#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//int divededby(int n,int a)


bool isPremier(A){
     bool result;
     result="true";
     for(int i=2;i<=A/2;i++){

        if(A%i==0){
             result="false";
        }

        break;}


        if (result="false"){
            printf("ce nombre n'est pas premier");
        }

        else{
            printf("ce nombre est premier");
        }
 }

 int main(){
     int A;
     printf("entrer le nombre que vous voulez tester :");
     scanf("%d",&A);
     isPremier(A);
     return 0;
 }
