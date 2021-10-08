#include <stdio.h>

int palindrome(int number){
    int  temp, p = 0;

    temp = number;
    // 121
    while (temp != 0)
    {
        p = p * 10;
        p = p + temp % 10;
        temp /= 10;
    }
    if(number == p) return 1;
    return 0;
}
int main(int argc, const char *argv[])
{   
    int number;
    printf("Number : ");
    scanf("%d", &number);
    int result = palindrome(number);
    if(result == 1) printf("%d is Palindrome Number.\n", number);
    else printf("%d is not Palindrome Number.\n", number);

    return 0;
}
