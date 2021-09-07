#include <stdio.h>
int main()
{

    int number;
    printf("Number Of Numbers : ");
    scanf("%d", &number);
    int numbers[number];
    int i;
    for (i = 0; i < number; i++)
    {
        printf("%d. Number : ",(i+1));
        scanf("%d",&numbers[i]);
    }

    int *pointer;
    for(i = 0 ; i < number ; i++){
        pointer = &numbers[i];
        printf("Number %d Address : %p\n",numbers[i],pointer);
    }

    return 0;
}
