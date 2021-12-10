#include <stdio.h>
#include <stdbool.h>

int recursiveReverse(int);

int reverse = 0, temp;

int main(int argc, const char *argv[])
{
    
    printf("%d", recursiveReverse(123)),

    printf("\n");
    return 0;
}

 int recursiveReverse(int num) {
        
        if (num == 0) return reverse;
        
        
        if (num > 0) {
            
            temp = num % 10;
            reverse = reverse * 10 + temp;
            num = recursiveReverse(num / 10);
        }

        return reverse;
    }



