#include <stdio.h>
#include "myLib.h"

int armstrong(int number)
{
    int temp, sum = 0;
    int basamakSayisi = basamakBulma(number);
    temp = number;
    // 371
    while (temp != 0)
    {
        sum += usAlma(temp % 10,basamakSayisi);
        
        temp /= 10;
    }

    if (sum == number) return 1;
    return 0;
        
}

int basamakBulma(int num){
    int basamak = 0;

    while (num != 0)
    {
        basamak++;
        num /= 10;
    }
    
    return basamak;
    
}

int usAlma(int num, int us){
    int i = 1, sum = 1;
    for(; i <= us ; i++){
        sum *= num;
    }
    return sum;
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