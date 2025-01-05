#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

long encode(long i);
bool check(long password);


int main(){

    long lower_limit,upper_limit,i,password ;

    printf("Lower Limit:");
    lower_limit=GetLong();
    printf("Upper Limit:");
    upper_limit=GetLong();
    for (i=lower_limit;i<=upper_limit;i++){
         password=encode(i);
         printf("Code: %ld Encoding: %ld ",i,password);
         if(check(password)){
            printf("isValid:yes\n");
         }
    }
return 0 ;}



long encode(long i){

    long digit,password;

    digit=(98-(i*100)%97)%97 ;
    password=(i*100)+digit ;
    return password ;}

bool check(long password){

    if(password%97==1){
       return TRUE ;}
    else{
       return FALSE ; } }












