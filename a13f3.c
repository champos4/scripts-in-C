#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main (){
   int N, i ;
   float sum ;

   sum=0 ;
   printf("Give limit:") ;
   N=GetInteger() ;
   for (i=1; i<=N; i++)
    {
       sum+=1.0/i ;
    }
   printf("The sum :%.2f\n",sum) ;
return 0 ; }











