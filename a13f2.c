#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int main (){
  int coffee,change,coin_2,coin_1,cent_50,cent_20,cent_10 ;

  printf("Give coffees:");
  coffee=GetInteger();

  if (coffee>7){
    printf("Money isn't enough");}

  else {
    change=500-coffee*70 ;
    coin_2=change/200;
    coin_1=(change%200)/100;
    cent_50=((change%200)%100)/50;
    cent_20=(((change%200)%100)%50)/20;
    cent_10=((((change%200)%100)%50)%20)/10;
    printf("Change\n") ;
    printf("Coins 2E:%d\n",coin_2) ;
    printf("Coins 1E:%d\n",coin_1);
    printf("Coins 50c:%d\n",cent_50);
    printf("Coins 20c:%d\n",cent_20);
    printf("Coins 10c:%d\n",cent_10);}
return 0 ;
}
