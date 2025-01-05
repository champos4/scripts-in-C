#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main()
{
    char array[100],new_array[100];
    int i,counter=0,sum=0;
    bool flag=FALSE;

    printf("Insert a string: ");
    gets(array);
    for(i=0;array[i]!='\0';i++)
    {
        if(array[i]>=48 && array[i]<=57)
        {
            flag=TRUE;
            counter++;
            new_array[counter]=array[i];
            sum=sum+array[i]-48 ;
        }
    }
    if(flag==FALSE)
    {
        printf("No digits in input.");
    }
    else
    {
        for(i=1;i<=counter;i++)
        {
           if(i==counter)
           {
               printf("%c = %d",new_array[i],sum);
           }
           else
           {
               printf("%c + ",new_array[i]);
           }
        }
    }
return 0 ;

}
