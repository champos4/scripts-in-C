#include "simpio.h"
#include "genlib.h"
#include <stdio.h>

bool Valid_Time(int hours,int minutes,int seconds);

int main (){

    int hours,minutes,seconds ;

    printf("Give hours:");
    hours=GetInteger();
    printf("Give minutes:");
    minutes=GetInteger();
    printf("Give seconds:");
    seconds=GetInteger();
    if (Valid_Time(hours,minutes,seconds)){
        printf("valid\n");}
    else{
        printf("not valid\n");
    }
return 0 ;
}


bool Valid_Time(int hours,int minutes,int seconds){

    if((hours>=0&&hours<=23) && (minutes>=0&&minutes<=59) && (seconds>=0&&seconds<=59)){
        return TRUE ;}
    else{
        return FALSE ;}
}
