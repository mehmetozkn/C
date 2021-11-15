#include <stdio.h>
#include <stdlib.h>

void tersMetin(char*);
int sizeBelirle(char *p);

int main(void) {

	char arr[] = "Fatih sultan";
	tersMetin(arr); 
	

	printf("\n");
	return EXIT_SUCCESS;
}

int sizeBelirle(char *p){
	int size = 0;
	int i;
	for(i = 0 ; *(p+i) !='\0' ; i++){
		size++;
	}
	return size;
}

void tersMetin(char *p){
	char temp;
	int i;
	int size = sizeBelirle(p)+1;
	

	char array[size+1];
	char *pArray = array;
	
	for ( i = 0; i < size; i++)
	{
		*(pArray+size-i) = *(p+i); 
	}

	for ( i = 0; i < size; i++)
	{
		*(p+i) = *(array+i);
		
	}

	for ( i = 0; i < size+1; i++)
	{
		printf("%c", *(p+i));
		
	}
	
	
}











