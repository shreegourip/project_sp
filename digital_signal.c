#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50]={0,0,1,0,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,0,
                   1,0,1,1,1,0,0,0,1,0,1,0,1,0,1,1,1,0,0,0,1,1,1,0,1};

    int count=0,a=0,b=1,r_count=0,f_count=0,l_count;
    printf("\n|| Sample number:%d || Voltage level:%d || Level",count,array[a]);
    count=1;
    while(count<50)
    {
        if(array[a]==0&&array[b]==1)
        {
            printf("\n|| Sample number:%d || Voltage level:%d || Raising",count,array[a]);
            r_count++;
        }
        if(array[a]==1&&array[b]==0)
        {
            printf("\n|| Sample number:%d || Voltage level:%d || Falling",count,array[a]);
            f_count++;
        }
        if((array[a]==0&&array[b]==0)||(array[a]==1&&array[b]==1))
        {
            printf("\n|| Sample number:%d || Voltage level:%d || Level",count,array[a]);
            l_count++;
        }
        count++;
        a++;
        b++;
    }
    printf("\nTotal Raising edges=%d\nTotal falling edges=%d\nTotal Level=%d",r_count,f_count,l_count);
    return 0;
}
