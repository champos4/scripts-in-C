#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>



int main (){
   long cars,years,initial_cars,limit;
   double rate ;

   printf("Give initial number of cars:");
   initial_cars=GetLong() ;
   printf("Give yearly rate of growth");
   rate=GetReal();
   printf("Give limit");
   limit=GetLong();
   years=0;
   cars=initial_cars ;
   while (cars<=limit)
   {
     cars=ceil(cars*(1+rate));
     years++ ;
   }
   printf("%ld\n",cars);
   printf("%ld",years);
return 0 ;
}

