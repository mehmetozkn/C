#include <stdio.h>


int reverse(int x){

  
    long  temp =0;
    
    if(x == 0) return 0;
    
    
    while (x != 0)
    {
        temp = (temp * 10)+ (x % 10);
        x /= 10;
    }

    return temp;
    
}


int main(int argc, const char *argv[])
{

    printf("\n%d",(reverse(123)));
    


    printf("\n");
    
    return 0;
}
