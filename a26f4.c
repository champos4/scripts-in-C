#include "genlib.h"
#include "simpio.h"
#include <stdio.h>

int f(int x);

int fg(int x,int y);

int gx(int x,int y)




int main(){

    int x,y;

    printf("Enter x: ");
    x=GetInteger();
    printf("Enter y: ");
    y=GetInteger();
    printf("f(x)=f(%d)=%d\n",x,f(x));
    printf("g(x,y)=g(%d,%d)=%d\n",x,y,gx(x,y));
    printf("f(g(x,y))=f(g(%d,%d)=%d",x,y,fg(x,y));


return 0 ; }





int f(int x){

    int a;

    if(x>0){
        a=x+2 ;
        return a;}
    else{
        a=-3*x+7;

        return a;}
}


int gx(int x,int y){

    int a ;

    if(x>0 && y>0){
       a=x-y;
       }

       return a ;
    else{
       a=7*x-5;

       return a;
       }
}

int fg(int x,int y){

    int a;

    if(x>0){
        if(y>0){
             a=x+2-y;
             return a;}
        else{
             a=7*x-3;
             return a;}}
    else{
       a=-21*x+22;

       return a;}
}
