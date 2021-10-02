#include <stdio.h>
#include <limits.h>

int romanToInt(char * s){
    
    int result = 0;
    int temp = INT_MAX;
    while (*s)
    {
        int number;
        switch (*s)
    {
    case 'I' : number = 1; break;
    case 'V' : number = 5; break;
    case 'X' : number = 10; break;
    case 'L' : number = 50; break;
    case 'C' : number = 100; break;
    case 'D' : number = 500; break;
    case 'M' : number = 1000; break;    
    }
    if(temp < number)result += number - temp * 2;
    else result += number; temp = number;  s++;
    }
    return result;

}

int main(int argc, const char *argv[])
{
    printf("%d\n",(romanToInt("MCMXCIV")));
    
    
    return 0;
}
