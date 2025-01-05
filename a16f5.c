#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <stdlib.h>

void populate(int a[50]);
void printArr(int a[50]);
int checkTable(int N,int a[50]);

int main()
{
    int a[50],N,i;

    populate(a);
    printArr(a);
    printf("Give a number from 0 to 9: ");
    N=GetInteger();
    printf("Number %d appears %d times \n",N,checkTable(N,a)) ;
    printf("At index:\n") ;
    for(i=0;i<50;i++)
    {
        if(a[i]==N)
        {
            printf("%d ",i) ;
        }
    }
return 0 ;
}


void populate(int a[50])
{
    int i ;

    for(i=0;i<50;i++)
    {
        a[i]=rand()%10 ;
    }
}

void printArr(int a[50])
{
    int i;

    for(i=0;i<50;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int checkTable(int N,int a[50])
{
    int i,counter=0;
    for(i=0;i<50;i++)
    {
        if(a[i]==N)
        {
            counter++ ;
        }
    }
return counter ;
}




