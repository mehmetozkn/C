#include <stdio.h>
#include <stdlib.h>
#define M 5

void printMatrix(float [M][M]);
float kenarTopla(float [M][M]);

int main(void) {
	float matrix[M][M] = {{8,1,3,2,4},{1,7,3,1,2},{3,6,0,9,2},{0,2,1,3,5},{2,7,5,3,8}};
	printMatrix(matrix);
	float result = kenarTopla(matrix);
	printf("\nResult = %2.f",result);
	

	printf("\n");
	return EXIT_SUCCESS;
}

float kenarTopla(float A[M][M]){
	float sum = 0;
	int i;
	int j;
	for(i = 0 ; i < M ;i++){
		for(j = 0 ; j < M ;j++){
			if((i == 0) || (i == M-1)){
				sum += A[i][j];
			}else{
				sum += A[i][M-1] + A[i][0];
				break;
			}
		}
	}

	return sum;
}

void printMatrix(float A[M][M]){
	int i;
	int j;
	
	for(i = 0 ; i < M ;i++){
		for(j = 0 ; j < M ;j++){
			printf("%2.f\t", *(*(A+i)+j));
		}
		printf("\n");
	}
}

