#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int sum_cube(int num);
bool isArmstrong(int num);
int cube(int n);

int main (){

   int i;
   for (i=0;i<999;i++){
   if (isArmstrong(i)){
   printf("%d\n",i);
   }}
return 0 ;
}

bool isArmstrong(int num)
{
  if (sum_cube(num)==num)
  {return TRUE;}
  else
  {return FALSE;}
}

int sum_cube(int num){
   int dig1,dig2,dig3,sum ;
   dig1=num%10 ;
   dig2=(num%100)/10;
   dig3=num/100 ;
   sum=cube(dig1)+cube(dig2)+cube(dig3);
   return sum ;
}

int cube(int n)
{
  int i ;
  int prod ;
  prod=1 ;
  for (i=0;i<3;i++){
    prod*=n ;
 }
return prod ; }






