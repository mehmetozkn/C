#include <stdio.h>

int addDigits(int num);

int main(int argc, const char *argv[])
{
    int number;
    printf("Number : ");
    scanf("%d", &number);
    printf("%d\n", addDigits(number));

    return 0;
}

int addDigits(int num){
    if (num == 0) return 0;
    if (num % 9 == 0) return 9;
    return num % 9;
    
}



