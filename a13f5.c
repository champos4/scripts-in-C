#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

void populate_data(int R,int C,int A[10][10]);
void print_array(int R,int C,int A[10][10]) ;
void change_array(int R,int C,int A[10][10]);

int main()
{
    int i,j,R,C,A[10][10];

    printf("Dwse ton arithmo twn grammwn: ");
    R=GetInteger();
    printf("Dwse ton arithmo twn sthlwn: ");
    C=GetInteger();
    populate_data(R,C,A);
    print_array(R,C,A);
    change_array(R,C,A);
    printf("ALLAGMENOS PINAKAS\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
return 0 ;
}

void populate_data(int R,int C,int A[10][10])
{
    int i,j;

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            A[i][j]=(rand()%100);
        }
    }
}

void print_array(int R,int C,int A[10][10])
{
    int i,j;

    printf("Starting matrix\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

void change_array(int R,int C,int A[10][10])
{
    int i,j,max,index;

    for(i=0;i<R;i++)
    {
        max=A[i][0];
        for(j=1;j<C;j++)
        {
            if(A[i][j]>max)
            {
                max=A[i][j];
                index=j ;
            }
        }
        for(j=0;j<index;j++)
        {
            A[i][j]=max;
        }
    }
}

