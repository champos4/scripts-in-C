#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void read_array(int a[],int *counter);
void print(int *min,int *max,int a[],int counter);

int main()
{
    int counter,a[100],min,max;

    printf("Enter the elements of the array,one per line.\n");
    printf("Use -1 to signal the end of the list.\n");
    counter=-1;

    read_array(a,&counter);
    min=a[0];
    max=a[0];
    print(&min,&max,a,counter);

    printf("The range of values is %d-%d",min,max);



return 0 ;
}

void read_array(int a[],int *counter)
{
    int i=0,x;
    do
    {
        if(x!=-1)
        {
            printf("? ");
            x=GetInteger();
            a[i]=x;
            *counter=*counter+1;
            i++;
        }
    }
    while(x!=-1);
}

void print(int *min,int *max,int a[],int counter)
{
    int i=0;

    for(i=0;i<counter;i++)
    {
        if(a[i]>*max)
        {
            *max=a[i];
        }
        if(a[i]<*min)
        {
            *min=a[i];
        }
    }
}
