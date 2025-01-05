#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include "math.h"


int main()
{
    int i;
    double x[5],y[4];

    for(i=0;i<5;i++)
    {
        printf("Enter number (%d):",i);
        x[i]=GetReal();
    }
    for(i=0;i<4;i++)
    {
        y[i]=fabs(x[i+1]-x[i]) ;
    }
    for(i=0;i<5;i++)
    {
        printf("%.2f ",x[i]) ;
    }
    printf("\n") ;
    for(i=0;i<4;i++)
    {
        printf("%.2f ",y[i]) ;
    }
return 0 ; }
