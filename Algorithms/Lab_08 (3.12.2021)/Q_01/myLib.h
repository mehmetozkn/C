#ifndef MYLIB_H_
#define MYLIB_H_

float *arrayGenerate(int);// size
void arrayFill(float *, int);
void arrayPrint(float *, int);
int **matrixGenerate(int, int);// row, column
void matrix1FillExample(int **, int, int);
void matrixPrint(int**, int, int);
void sorting(int *array, int size);
float medyanBul(int dizi[], int size);
float *satirMedyan(int **matrix, int row, int column);
// Medyan = Dizi siralandiktan sonra ortadaki eleman.



#endif