#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>

void update(int *pHour,int *pMinute,int *pSecond,int addSecond)
{
    if(*pSecond + addSecond >= 60)
    {
        int temp1 = (*pSecond + addSecond)/60;
        *pSecond = (*pSecond+addSecond) - (temp1*60);
        *pMinute += temp1;
        *pHour += *pMinute/60;
        if(*pMinute == 60)
        {
            *pMinute = 0;
        }
        while(*pMinute > 60)
        {
            *pMinute = *pMinute%60;
        }
        while(*pHour > 24)
        {
            *pHour = *pHour%24;
        }



    }
    else
    {
  *pSecond += addSecond;
    }

}
int main()
{
    int hour, minute, second, sadd;

    printf("Time (hour, minute, second) : ");
    scanf("%d %d %d",&hour, &minute, &second);
    printf("\nTime to be added (second) : ");
    scanf("%d",&sadd);
    update(&hour,&minute,&second,sadd);
    printf("\nNew Time : %d %d %d",hour, minute, second);



    return 0;
}
