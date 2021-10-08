#include <stdio.h>


int faktoriyel(int number);
int strongNumber(int number);

int main(int argc, const char *argv[])
{
    int number;
    printf("Number = ");
    scanf("%d", &number);
    int result = strongNumber(number);
    if(result == 1) printf("%d is Strong Number.\n", number);
    else printf("%d is not Strong Number.\n", number);

    
    return 0;
}

int faktoriyel(int number){
    int sum = 1;
    for(; number > 1 ; number--){
        sum *= number;
        
    }
    return sum;

}
int strongNumber(int number){
    
    int temp, sum;

    temp = number;
    // 145
    while (temp != 0)
    {
        int a = temp % 10;
        sum += faktoriyel(a);
        temp /= 10;

    }
    if(sum == number) return 1;
    else return 0;
}