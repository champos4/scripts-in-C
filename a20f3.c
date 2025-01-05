#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int main(){
    int max,min,age ;


    printf("Give age:");
    age=GetInteger();
    max=age ;
    min=age ;
    while (age!=-1){
     if (age>max){
        max=age;
     }
     if (age<min){
        min=age;
     }
     printf("Give age:");
     age=GetInteger();}
     printf("Oldest age is %d\n",max);
     printf("Youngest age is %d",min);
return 0 ; }
