#include "simpio.h"
#include "genlib.h"
#include <stdio.h>
#include <math.h>

#define CTS 10
#define S 3

int main ()
{
    double temper[CTS][S],average[CTS],devnat[CTS][S],mdeviation[CTS],natavg=0;
    int i,j ;

    for(i=0;i<CTS;i++)
        for(j=0;j<S;j++)
        {
            printf("Temp of City %d During %d 8-hour period: ",i,j) ;
            temper[i][j]=GetReal() ;
        }
    for(i=0;i<CTS;i++)
        for(j=0;j<S;j++)
        {
            natavg+=temper[i][j] ;
        }
    natavg=natavg/(CTS*S)  ;
    for(i=0;i<CTS;i++)
    {
        average[i]=0 ;
        for(j=0;j<S;j++)
        {
            average[i]=average[i]+temper[i][j] ;
        }
        average[i]=average[i]/S ;
    }
    for(i=0;i<CTS;i++)

        for(j=0;j<S;j++)
        {
            devnat[i][j]=fabs(natavg-temper[i][j]) ;
        }

    for(i=0;i<CTS;i++)
    {
        mdeviation[i]=devnat[i][0] ;
        for(j=1;j<S;j++)
        {
            if(mdeviation[i]<devnat[i][j])
            {
                mdeviation[i]=devnat[i][j] ;
            }
        }
    }
    printf("%.1f\n",natavg) ;
    for(i=0;i<CTS;i++)

        printf("City %d %.1f %.1f\n",i,average[i],mdeviation[i]) ;

return 0 ;
}
