#include <stdio.h>
#include <stdlib.h>


int strUzun (char * str);

int main() {
	
    char array[7] = "mehmet"; 
    printf("Size = %d", strUzun(array));

	printf("\n");
	return 0;
}

int strUzun (char * str){
    int size = 0;
    
    while (str[size] != '\0')
    {
        size++;
        
    }
    
return size;   

}

