#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>


int get_code() ;
double discount_percentage(int code) ;
int product_points(int code,double finalprice) ;

int main (){

    int code,points ;
    double price,finalprice,discount,total,discountsum;


    total=discountsum=0 ;
    points=0;
    while(code=get_code()){
    /* Input */
        printf("Price: ");
        price=GetReal(); }

    /*Computation */
        discount=discount_percentage(code)*price;
        discountsum+= discount ;
        finalprice=price-discount;
        total+=finalprice;
        points +=product_points(code,finalprice);

    /*Output*/
        printf("-----------------\n");
        printf("Final: %.2f Euro\n",total );
        printf("Discount: %.2f Euro\n",discountsum);
        printf("Points: %d\n",points);

return 0 ;
}


int get_code(){
   int code;

   while(TRUE){
     printf("Password: ");
     code=GetInteger();
     if (code>=0 && code<=2000){
        return code;}
     printf("Wrong password (0-2000)\n");
   }
}


double discount_percentage(int code){


    if (code<=300) return 0.05 ;
    else if (code<=500) return 0.10 ;
    else if (code<=1000) return 0.15 ;
    else return 0.20 ;
}


int product_points(int code,double finalprice){
    int points=1 ;
    if (code>=1000 && code<=1500){
        points+=ceil(finalprice/5);}
    return points ;
}



