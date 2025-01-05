#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

void decompose (long *number,int *digits,double *average,int *max);

int main()
{
    int digits=0,max=0;
    double average=0;
    long number;

    printf("Please insert non-negative number:");
    number=GetLong();
    decompose(&number,&digits,&average,&max);

    printf("Digits: %d\n",digits);
    printf("Average: %.3f\n",average);
    printf("Max: %d",max);

return 0 ;
}

void decompose (long *number,int *digits,double *average,int *max)
{
    long y;
    y=*number;

   while(*number!=0)
   {
      y=*number%10;
      *average=*average+y;
      if(y>*max)
      {
          *max=y;
      }
      *digits=*digits+1;
      *number=*number/10;
   }
   *average=*average/ *digits ;
}


