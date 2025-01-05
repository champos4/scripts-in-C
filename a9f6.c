#include <stdio.h>
#include "simpio.h"

#define SALESMEN 4
#define PRODUCTS 5

void calculateSales(int S,int P,int salesTable[S][P],int price[],int sp[]);
void calculateProductSales(int S,int P,int salesTable[S][P],int prods[]);
void maxArray(int size,int table[],int *max,int *pos);
void printArray(int size,int table[]);

int main()
{
    int price[PRODUCTS]={250,150,320,210,920};
    int sales[SALESMEN][PRODUCTS]=
                    {
                    {10,4,5,6,7},
                    {7,0,12,1,3},
                    {4,19,5,0,8},
                    {3,2,1,5,6}};
    int salesPerson[SALESMEN];
    int productSale[PRODUCTS];
    int MaxSalesMan,MaxProduct;
    int income,items;

    calculateSales(SALESMEN,PRODUCTS,sales,price,salesPerson);
    calculateProductSales(SALESMEN,PRODUCTS,sales,productSale);
    maxArray(SALESMEN,salesPerson,&income,&MaxSalesMan);
    maxArray(PRODUCTS,productSale,&items,&MaxProduct);

    printf("SalesMan-Sales \n");
    printArray(SALESMEN,salesPerson);
    printf("Best SalesMan was %d with %d sales\n",MaxSalesMan,income);

    printf("Product-Items\n");
    printArray(PRODUCTS,productSale);
    printf("Best product was %d with %d items",MaxProduct,items);





}

void calculateSales(int S,int P,int salesTable[S][P],int price[],int sp[])
{
    int i,j;
    for(i=0;i<S;i++)
    {
        sp[i]=0;
        for(j=0;j<P;j++)
        {
            sp[i]+=salesTable[i][j]*price[j];
        }
    }
}

void calculateProductSales(int S,int P,int salesTable[S][P],int prods[])
{
    int i,j ;

    for(j=0;j<P;j++)
    {
        prods[j]=0;
        for(i=0;i<S;i++)
        {
            prods[j]+=salesTable[i][j];
        }
    }
}

void maxArray(int size,int table[],int *max,int *pos)
{
    int i;

    *max=table[0];
    *pos=0;
    for(i=1;i<size;i++)
    {
        if(table[i]>*max)
        {
            *max=table[i];
            *pos=1;
        }
    }
}

void printArray(int size,int table[])
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("    %d     %d\n",i,table[i]);
    }
}