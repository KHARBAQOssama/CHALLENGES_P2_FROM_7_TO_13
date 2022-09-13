#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_leap_year(int A){
    bool Y;
    Y= false;
    if(A%4==0 && A%100!=0){
        Y=true;
    }
    else if(A%400==0){
        Y  =true;
    }

    return Y;
}

int main (){
    int year;
    bool check;
    do{
        printf("saisez une année entre 1800 et 10000 :");
        scanf("%d",&year);
    }while(year<1800 || year>10000);

    check = is_leap_year(year);

    if(check==true){
        printf("votre annee est bissextile");
    } else{printf("votre annee n'est pas bissextile");}


    return 0;
}

//bool is_leap_year(int A){
//    bool Y;
//    Y= false;
//    if(A%4==0 && A%100!=0){
//        Y=true;
//    }
//    else if(A%400==0){
//        Y  =true;
//    }
//
//    return Y;
//}
