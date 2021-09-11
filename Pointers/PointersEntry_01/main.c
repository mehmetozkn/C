#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    int *aptr;

    a = 5;
    aptr = &a;

    printf("a'nin adresi = %p \n",&a);

    printf("aptr'nin adresi = %p \n",&aptr);

    printf("a'nin degeri = %d \n",a);

    printf("aptr'nin degeri = %p \n",aptr);

    printf("*aptr = %d \n",*aptr);

    printf("*&aptr = %p \n",*&aptr);

    printf("&*aptr = %p \n",&*aptr);

    *aptr = 9;

    printf("*aptr = %d \n",*aptr);

    printf("a'nin degeri = %d \n",a);





















    return 0;
}
