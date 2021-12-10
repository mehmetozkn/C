#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 3
int i;
int j;
void pullRow(int A[M][N], int r, int *row);
void pullCol(int A[M][N], int c, int *col);
void printMatrix(int [M][N]);
void printMatrix2(int **d,int n);

int main(void) {
	int A[M][N] = {{3,2,6},{5,1,8},{5,4,9},{7,1,3}};
	int B[N][M];
	int array1[3];
	int array2[3];
	

	for(i = 0 ; i < M ; i++){
		for(j = 0 ; j < N ;j++){
			B[j][i] = A[i][j];
		}
	}


	printMatrix(A);
	printf("\n");

	int *ptr[2];
	ptr[0]=array1;
    ptr[1]=array2;

	pullRow(A,3,array1);
	pullCol(A,2,array2);
	

	printMatrix2(ptr,2);
	
	printf("\n");
	return EXIT_SUCCESS;
}

void pullCol(int A[M][N], int c, int *col){
	for(i = 0 ; i < M ;i++){
		col[i] = A[i][c];
	}
}

void pullRow(int A[M][N], int r, int *row){
	for(i = 0 ; i < N ;i++){
		row[i] = A[r][i];
	}
}

void printMatrix(int A[M][N]){
	
	int *ptr=A;
	for(i = 0 ; i < 4 ;i++){
		for(j = 0 ; j < 3 ;j++){
			printf("%d\t", (*(ptr+i)+j));
		}
		printf("\n");
	}
}

void printMatrix2(int **d, int n){
     int *ptr=d[0];
    int *ptr1=d[1];
    int i,j;
    for(i=1;i<=N;i++)        
            printf("%d ",*(ptr++));

    puts("");        
    for(i=1;i<=(M*N);i++)        
            printf("%d ",*(ptr1++));
    
}


/*void printMatrix(int A[M][N]){
	int n = M*N;
	*ptr = A;

	for(i = 1 ; i <= n ;i++){
		printMatrix("%d\t", *(ptr++));
		if(i%N == 0) puts("");
	}

}*/

