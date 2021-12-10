#include <stdio.h>
#include <stdlib.h>
#define M 4

int kesinKosegenMi(int [M][M]); 

int main(void) {
	int A[M][M] = {{8,1,3,-2},{-1,7,1,2},{3,0,-9,2},{0,1,-3,5}};
	int result = kesinKosegenMi(A);
	if(result == 1) printf("Bu Matris Kesin Kosegen Matristir.");
	if(result == 0) printf("Bu Matris Kesin Kosegen Matris Degildir.");
	
	

	printf("\n");
	return EXIT_SUCCESS;
}

int kesinKosegenMi(int C[M][M]){
	int i;
	int j;
	int sum;
	int temp;
	int **ptr = C;
	for(i = 0 ; i < M ;i++){
		for(j = 0 ; j < M ;j++){
			if(i == j){
				if(C[i][j] < 0){
					C[i][j] = (C[i][j])*(-1);
					// C[i][j] = abs(C[i][j]);
				}
				temp = C[i][j];
			}else{
				if(C[i][j] < 0){
					C[i][j] = (C[i][j])*(-1);
				}
				sum += C[i][j];
			}
		}
		if(temp > sum) return 1;
		temp = 0;
		sum = 0;
	}

	return 0;
}

