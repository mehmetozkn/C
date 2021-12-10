#include "myLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COLUMN 3 

float *arrayGenerate(int size){
    float *array =(float *) malloc(size*sizeof(float));
    return array;

}

void arrayFill(float *array, int size){
    int i;
    srand(time(0));
    for(i = 0 ; i < size ; i++){
        *(array+i) = (rand()%10)+1;
    }
}

void arrayPrint(float *array, int size){
    int i;
    for(i = 0 ; i < size ; i++){
        printf("%2.f ",*(array+i));
    }
}

int **matrixGenerate(int row, int column){  
    int i;
    int **matrix =malloc(row * sizeof(int *)); 
    for(i = 0 ; i < row ; i++){
        matrix[i] = malloc(column*sizeof(int));
    }
    return matrix;
}

void matrix1FillExample(int **matrix, int row , int column){
    int i,j;
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < column ; j++){
            matrix[i][j] = (rand()%10)+1;
        }
    }
}

void matrixPrint(int **matrix, int row, int column){
    int i,j;
    // pointer ile yazdirma
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < column ; j++){
           printf("%d\t", *(*(matrix+i)+j));
        }
        printf("\n");
    }

    /* printf("\n*************\n");
     // normal yazdirma
      for(i = 0 ; i < row ; i++){
        for(j = 0 ; j < column ; j++){
           printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    } */
}

void sorting(int *array, int size){
    int i,j;
    int temp;

    for(i = 0 ; i < size ; i++){
        for(j = 0 ; j < size- i - 1 ; j++){
              if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

float medyanBul(int array[], int size){
    float medyan = 0;
    if(size%2 == 0){
        medyan=(array[(size-1)/2]) + (array[size/2])/2.0;

    }else{
        medyan = array[size/2];

    }
    return medyan;
}

float *satirMedyan(int **matrix, int row, int column){
    float *medyan =(float *) malloc(ROW*sizeof(float));
    int i;
    for(i = 0 ; i < ROW ; i++){
        sorting(matrix[i], column);
        medyan[i] = medyanBul(matrix[i], COLUMN);
    }

    return medyan;
}





