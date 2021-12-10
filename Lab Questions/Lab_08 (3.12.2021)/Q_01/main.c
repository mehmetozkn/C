#include <stdio.h>
#include <stdlib.h>
#include "myLib.c"

#define ROW 4
#define COLUMN 3 

int main(void)
{
    float *array;
    int **matrix;
    float *medyanlar;
    int i;

    array = arrayGenerate(ROW);
    arrayFill(array, ROW);
    arrayPrint(array, ROW);
    printf("\n------------------\n");

    matrix = matrixGenerate(ROW, COLUMN);
    matrix1FillExample(matrix, ROW, COLUMN);
    matrixPrint(matrix, ROW, COLUMN);
    

    for(i = 0 ; i < ROW ; i++){
        sorting(matrix[i], COLUMN);
    }
    printf("\n-----Siralandiktan Sonra-----\n");
    matrixPrint(matrix, ROW, COLUMN);
    printf("\n---Medyanlar---\n");
    medyanlar = satirMedyan(matrix, ROW, COLUMN);
    arrayPrint(medyanlar,ROW);
	
    free(array);
    free(matrix);

	printf("\n");
	return 0;
}


