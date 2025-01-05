#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int max(int a,int b);
int gr(int a,int b,int c);

int main()
{
   int a,b,c ;
   double y ;

   printf("Dwse a: ");
   a=GetInteger();
   printf("Dwse b: ");
   b=GetInteger();
   printf("Dwse c: ");
   c=GetInteger();
   y=(2*max(a,b)+3*gr(a,c,b))/4 ;
   printf("y=%.2f",y);
return 0 ;
}


int max(int a,int b)
{
    if(a>b)
    {
       return a;
    }
    return b;
}


int gr(int a,int b,int c)
{
    int max ;

    if(a>b && a>c)
    {
      max=a ;
    }
    if(b>a && b>c)
    {
      max=b ;
    }
    if(c>a && c>b)
    {
      max=c ;
    }
    return max ;
}




