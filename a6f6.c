#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

#define N 5

void readData(int rows,int columns,int a[rows][columns],int *men,int *women);
void FindMean(int pointer,float *avA,float *avG,int *men,int *women,int row,int a[row][4]);

int main()
{
    int a[N][4];
    float avbA=0,avbG=0,avyA=0,avyG=0,avhA=0,avhG=0,men=0,women=0;

    readData(N,4,a,&men,&women);
    FindMean(1,&avbA,&avbG,&men,&women,N,a);
    FindMean(2,&avyA,&avyG,&men,&women,N,a);
    FindMean(3,&avhA,&avhG,&men,&women,N,a);

    printf("AVG MEN WEIGHT: %.1f\n",avbA);
    printf("AVG WOMEN WEIGHT: %.1f\n",avbG);
    printf("\n");
    printf("AVG HEIGHT MEN: %.1f\n",avyA);
    printf("AVG HEIGHT WOMEN :%.1f\n",avyG);
    printf("\n");
    printf("AVG AGE MEN: %.1f\n",avhA);
    printf("AVG AGE WOMEN: %.1f\n",avhG);

return 0;
}

void readData(int rows,int columns,int a[rows][columns],int *men,int *women)
{
    int i;

    for(i=0;i<N;i++)
    {
        printf("MALE OR FEMALE: ");
        a[i][0]=GetInteger();
        if(a[i][0]==0)
        {
            *men=*men+1;
        }
        else
        {
            *women=*women+1;
        }
        printf("WEIGHT: ");
        a[i][1]=GetInteger();
        printf("HEIGHT: ");
        a[i][2]=GetInteger();
        printf("AGE: ");
        a[i][3]=GetInteger();
        printf("-----\n");
    }
}

void FindMean(int pointer,float *avA,float *avG,int *men,int *women,int row,int a[row][4])
{
    int i;

    for(i=0;i<row;i++)
    {
        if(a[i][0]==0)
        {
            *avA=*avA+a[i][pointer];
        }
        else
        {
            *avG=*avG+a[i][pointer];
        }
    }
    *avA=*avA/ ((float)*men);
    *avG=*avG/((float)*women);
}
