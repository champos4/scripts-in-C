#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


long long GetLongLong(void) ;


int main()
{
    long long card,x,c[16] ;
    int i=15,sum=0;
    bool flag=TRUE,flag2=TRUE;

    printf("Insert card number: ");
    card=GetLongLong() ;
    x=card ;
    if(x>=1000000000000000 && x<=9999999999999999)
    {
        while(x!=0)
        {
            c[i]=x%10;
            x=x/10 ;
            i-- ;
        }
    }
    else
    {
        printf("%lld is invalid",card);
        flag=FALSE ;
    }
    if((c[0]<4 || c[0]>7) && flag==TRUE)
    {
        printf("%lld is invalid",card);
        flag2=FALSE ;
    }
    for(i=0;i<16;i+=2)
    {
        c[i]=c[i]*2;
        if(c[i]>=10)
        {
            c[i]=c[i]/10+c[i]%10 ;
        }
    }
    for(i=0;i<16;i++)
    {
        sum+=c[i];
    }
    if(sum%10==0)
    {
        printf("%lld is VALID",card);
    }
    else
    {
        if(flag==TRUE && flag2==TRUE)
        {
            printf("%lld is invalid",card) ;
        }
    }
return 0 ; }














long long GetLongLong(void)
{
    string line;
    long long value;
    char termch;

    while (TRUE) {
        line = GetLine();
        switch (sscanf(line, " %lld %c", &value, &termch)) {
          case 1:
            FreeBlock(line);
            return (value);
          case 2:
            printf("Unexpected character: '%c'\n", termch);
            break;
          default:
            printf("Please enter an integer\n");
            break;
        }
        FreeBlock(line);
        printf("Retry: ");
    }
}

