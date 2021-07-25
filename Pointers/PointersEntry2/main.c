#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>


void takas(int *xp, int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
    int a = 5;
    int b = 7;
    printf("a = %d, b = %d \n",a , b);
    takas(&a,&b);
    printf("a = %d, b = %d \n",a , b);


    return 0;
}
