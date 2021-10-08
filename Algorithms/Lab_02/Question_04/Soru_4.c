#include <stdio.h>

int perfectNumber(int number);

int main(int argc, const char *argv[])
{
    int number;
    printf("Number : ");
    scanf("%d", &number);
    int result = perfectNumber(number);
    if(result == 1) printf("%d is Perfect Number.\n", number);
    else printf("%d is not Perfect Number.\n", number);
    
    return 0;
}

int perfectNumber(int number){
    int sum = 0;

    int i = 1;
    for( ; i < number ; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    if(sum == number) return 1;
    else return 0;

}