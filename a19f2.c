#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main (){
  int gr ;
  float amount ;

  printf("Give gr of CO2/khm:");
  gr=GetInteger();
  if (gr>=0&&gr<=120){
     amount=0.9*gr ;}
  else if (gr>120&&gr<=140){
     amount=1.1*gr ;}
  else{
     amount=1.7*gr ;}
  printf("They payment amount is %g",amount );

return 0 ;}
