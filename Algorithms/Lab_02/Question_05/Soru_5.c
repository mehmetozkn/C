#include <stdio.h>

int friendNumbers(int n1, int n2);

int main(int argc, const char *argv[])
{   
    int n1, n2;

    printf("Number 1 : ");
    scanf("%d", &n1);

    printf("\nNumber 2 : ");
    scanf("%d", &n2);

    int result = friendNumbers(n1,n2);
    if(result == 1) printf("%d and %d are Friend Number.\n", n1,n2);
    else printf("%d and %d are not Friend Number.\n", n1, n2);
    
    return 0;
}

int friendNumbers(int n1, int n2){
    int sum1 = 0, sum2 = 0;

    int i = 1;
    for( ; i < n1 ; i++){
        if(n1 % i == 0){
            sum1 += i;
        }
    }
    i = 1;
    for(; i < n2 ; i++){
        if(n2 % i == 0){
            sum2 += i;
        }
    }

    if(sum1 == n2 && sum2 == n1) return 1;
    else return 0;

}