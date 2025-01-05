#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main (){
   int day ;

  printf("Give a number from 1 to 7:");
  day=GetInteger();
  if(day<1||day>7){
    printf("ERROR");}
  else{
    if(day==1){
       printf("The day is Monday\n");}
    else if(day==2){
       printf("The day is Tuesday\n");}
    else if(day==3){
       printf("The day is Wednesday\n");}
    else if(day==4){
       printf("The day is Thursday\n");}
    else if(day==5){
       printf("The day is Friday\n");}
    else if(day==6){
       printf("The day is Saturday\n");}
    else{
       printf("The day is Sunday\n");}}
return 0 ; }
