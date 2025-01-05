#include <stdio.h>
#include "simpio.h"

int main(){
 long purchaseAmount;
 int rate;
 double profit;
 double salesAmount;

 printf("Give product's value");
 purchaseAmount=GetLong();

 printf("Give profit of percentage ");
 rate=GetInteger();

 profit=purchaseAmount*((double)rate/100.0);
 salesAmount=purchaseAmount+profit;

 printf("The profit is %g\n",profit);
 printf("The amount of profit is  %g",salesAmount);
 return 0;
}
