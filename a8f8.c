#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include "stdlib.h"


typedef struct {
  int width;
  int height;
  int depth;
  int area;
  int volume;
}box;

box dimensions(box y);
void area(box *y);
void volume(box *y);

int main()
 {
   box y;

   y=dimensions(y);
   area(&y);
   volume(&y);
   printf("Area is  %d cm2\n",y.area);
   printf("Volume is  %d cm3",y.volume);
return 0;
}

box dimensions(box y)
{
    box x;

    printf("Length in cm: ");
    x.width=GetInteger();
    printf("Height in cm: ");
    x.height=GetInteger();
    printf("Depth in cm: ");
    x.depth=GetInteger();
return (x);
}

void area(box *y)
{
     (*y).area=2*((*y).width*(*y).depth+(*y).width*(*y).height+(*y).depth*(*y).height);
}
void volume(box *y)
{
     (*y).volume=((*y).width*(*y).height*(*y).depth);
}

