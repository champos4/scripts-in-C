#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int gcd(int a,int b) ;
int phi(int i) ;
bool coprime(int a,int b) ;


int main()
{
    int x,i ;

    printf("Enter x : ") ;
    x=GetInteger() ;
    for(i=1;i<=x;i++)
    {
        printf("phi(%d)= %d\n",i,phi(i));
    }
 return 0 ;
}


int gcd(int a,int b)
{

    if(b==0)
    {
        return a ;
    }
    else
    {
        return gcd(b,a%b) ;
    }
}


int phi(int i)
{
    int j,counter=0 ;
    for(j=1;j<=i;j++)
    {
        if(coprime(i,j))
        {
            counter++ ;
        }
    }
    return counter ;
}


bool coprime(int i,int j)
{
    if(gcd(i,j)==1)
    {
        return TRUE ;
    }
    return FALSE ;
}
