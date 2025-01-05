#include "simpio.h"
#include <stdio.h>
#include "genlib.h"
#include <stdlib.h>

typedef struct{

    char name[60];
    int start;
    int duration;

}wpT;

void ReadWorkpackages(wpT array[],int rows);
wpT FindFirstWp(wpT array[],int rows,int *index);
int FindMakespan(wpT array[],int rows);


int main()
{
    int packages,index=0;

    printf("Total work packages: ");
    packages=GetInteger();
    wpT array[packages];
    ReadWorkpackages(array,packages);
    FindFirstWp(array,packages,&index);
    printf("FIRST WP: %s start: %d duration: %d",array[index].name,array[index].start,array[index].duration);
    printf("\nTotal duration = %d",FindMakespan(array,packages));



return 0;
}

void ReadWorkpackages(wpT array[],int rows)
{
    int i;

    for(i=0;i<rows;i++)
    {
        printf("WP Name:");
        gets(array[i].name);
        printf("WP Start Month:");
        array[i].start=GetInteger();
        printf("WP Duration:");
        array[i].duration=GetInteger();
    }
}

wpT FindFirstWp(wpT array[],int rows,int *index)
{
    int i;
    int min=array[0].start;

    for(i=1;i<rows;i++)
    {
        if(array[i].start<min)
        {
            min=array[i].start;
            *index=i;
        }
    }
return array[*index];
}

int FindMakespan(wpT array[],int rows)
{
    int i,index=0;
    int max=array[0].duration;

    for(i=1;i<rows;i++)
    {
        if(array[i].duration>max)
        {
            max=array[i].duration;
            index=i;
        }
    }
return max+array[index].start;
}



