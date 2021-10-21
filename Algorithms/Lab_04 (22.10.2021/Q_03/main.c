#include <stdio.h>
#include <stdbool.h>

int siraliMi(int [], int);

int main(int argc, const char *argv[])
{
    int array1[5] = {4,5,1,5,2};
    int array2[5] = {3,4,6,7,8};
    int array3[5] = {9,8,7,4,3};   

    printf("%d\n", siraliMi(array1,5)); // 0
    printf("%d\n", siraliMi(array2,5)); // 1
    printf("%d\n", siraliMi(array3,5)); // 2

    printf("\n");
    return 0;
}

int siraliMi(int array[], int size){
    int i;
    

    // 1 2 3 4 5
    
    if(array[0] <= array[1]){
        for(i = 0 ; i < size - 1 ; i++){
            if(array[i] == array[i+1]) continue;
            if(array[i] < array[i+1]){
                
            }else{
               // siraliDegil
                return 0;
                
            }
        
        }
       // kucuktenBuyuge
       return 1;
            
    }

    // 5 4 3 2 1
    if(array[0] >= array[1]){
        for(i = 0 ; i < size - 1 ; i++){
            if(array[i] == array[i+1]) continue;
            if(array[i] > array[i+1]){
            
            }else{
               // siraliDegil
                return 0;
            }
            
            
        }
        // buyuktenKucuge
        return 2;
    }

        return -1;
        
    }
    



