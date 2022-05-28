/*

* @file matrisoperations.c
* @description matrise operasyona gore islem uygular
* @assignment 1.Proje
* @date 12.12.2021
* @author Mehmet  /  mehmet.ozkan@stu.fsm.edu.tr

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrisoperations.h"

extern int **operasyon1(int **matrix1, int **matrix2, int islemTipi, int sizeMatrix1, int sizeMatrix2, int sizeOutputMatrix)
{

    int **resultMatris;
    resultMatris = matrixGenerate(sizeOutputMatrix, sizeOutputMatrix); // Sonuc matrisi olusturur.
    matrixFillWith0(resultMatris, sizeOutputMatrix, sizeOutputMatrix); // Sonuc matrisinin tum elemanlarını 0 yapar.
    int i, j, m, k;
    int row = sizeMatrix1 - sizeMatrix2;
    int column = sizeMatrix1 - sizeMatrix2;

    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= column; j++)
        {
            int sum = 0;
            int temp_i_start = 0, temp_j_start = 0;
            for (k = i; k <= i + sizeMatrix2 - 1; k++)
            {
                temp_j_start = 0;
                for (m = j; m <= j + sizeMatrix2 - 1; m++)
                {
                    sum += matrix1[k][m] * matrix2[temp_i_start][temp_j_start];
                    // printf("%d, %d ile %d, %d carpildi\n", k, m, temp_i_start, temp_j_start);
                    // printf("%d,ile %d carpildi\n", matrix1[k][m],matrix2[temp_i_start][temp_j_start]);
                    temp_j_start++;
                }
                temp_i_start++;
            }
            resultMatris[i][j] = sum;
        }
    }

    return resultMatris;
}

extern int **genislet(int **matrix, int row, int column) // Islem tipi 1 girildiğinde matrisin cevresini genisleterek 0'larla doldurur.
{

    int i_start = 0, j_start = 0;
    int **matrix2;
    matrix2 = matrixGenerate(row + 2, column + 2);
    matrixFillWith0(matrix2, row + 2, column + 2);

    for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {

            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)
                matrix2[i][j] = 0;
            else
            {

                matrix2[i][j] = matrix[i_start][j_start];
                if (j_start == row - 1)
                {
                    i_start++;
                    j_start = 0;
                }
                else
                {
                    j_start++;
                }
            }
        }
        j_start = 0;
    }
    printf("Genisletilmis Matrix\n");
    for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------\n");

    return matrix2;
    free(matrix);
}

extern int **matrixGenerate(int row, int column) // Heap'te matris olusturur ve bu matrisi dondurur.
{
    int i;
    int **matrix = malloc(row * sizeof(int *));
    for (i = 0; i < row; i++)
    {
        matrix[i] = malloc(column * sizeof(int));
    }
    return matrix;
}

extern void matrixFillRandom(int **matrix, int row, int column) // Rastgele degerler ile matrisi doldurur.
{
    srand(time(NULL));
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrix[i][j] = (rand() % 10) + 1;
        }
    }
}

extern void matrix1FillExampleSenaryo1(int **matrix, int row, int column) // Matris1'i senaryo 1'e gore doldurur.
{
    // projede verilen senaryo 1'in uygulamasi.
    /*  {21, 19, 17, 25, 28}
        {71, 76, 73, 68, 59}
        {153, 164, 164, 157, 155}
        {200, 201, 190, 185, 180}
        {205, 210, 215, 230, 232}  */
    int array[25] = {21, 19, 17, 25, 28, 71, 76, 73, 68, 59, 153, 164, 164, 157, 155, 200, 201, 190, 185, 180, 205, 210, 215, 230, 232};

    int i, j, k = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrix[i][j] = array[k];
            k++;
        }
    }
}

extern void matrix1FillExampleSenaryo2(int **matrix, int row, int column) // Matris1'i senaryo 2'ye gore doldurur.
{
    // projede verilen senaryo 2'nin uygulamasi.
    /*  {60, 113, 56, 139, 85}
        {73, 121, 54, 84, 128}
        {131, 99, 70, 129, 127}
        {80, 57, 115, 69, 134}
        {104, 126, 123, 95, 130}  */
    int array[25] = {60, 113, 56, 139, 85, 73, 121, 54, 84, 128, 131, 99, 70, 129, 127, 80, 57, 115, 69, 134, 104, 126, 123, 95, 130};

    int i, j, k = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrix[i][j] = array[k];
            k++;
        }
    }
}

extern void matrixFillWith0(int **matrix, int row, int column) // Matrisin icini 0'larla doldurur.
{

    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

extern void matrix2FillExampleSenaryo1(int **matrix, int row, int column) // Matris2'yi senaryo 1'e gore doldurur.

{
    int array[9] = {-1, -1, -1, -1, 8, -1, -1, -1, -1};
    int i, j, k = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrix[i][j] = array[k];
            k++;
        }
    }
}

extern void matrix2FillExampleSenaryo2(int **matrix, int row, int column) // Matris2'yi senaryo 2'ye gore doldurur.
{
    int array[9] = {0, -1, 0, -1, 5, -1, 0, -1, 0};
    int i, j, k = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrix[i][j] = array[k];
            k++;
        }
    }
}

extern void matrixPrint(int **matrix, int row, int column) // Parametre olarak verilen matrisi yazdirir.
{
    int i, j;
    // pointer ile yazdirma
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    // normal yazdirma
    /* for(i = 0 ; i < row ; i++){
       for(j = 0 ; j < column ; j++){
          printf("%d\t", matrix[i][j]);
       }
       printf("\n");
   } */
}

extern int matrix1Sizing() // Kullanicidan matris1'in boyutunu alır ve dondurur.
{
    int rowColumn;
    do
    {
        printf("Matris1 Satir ve Sutun Sayisi = ");
        scanf("%d", &rowColumn);
        if (rowColumn % 2 == 0 || rowColumn < 5)
        {
            printf("Matris1'in Satir ve Sutun Sayilari Tek Sayilardan Olusmali ve 5'ten Kucuk Olmamali!\n");
        }
        else
        {
            break;
        }
    } while (rowColumn % 2 == 0 || rowColumn < 5);

    return rowColumn;
}

extern int matrix2Sizing() // Kullanicidan matris2'nin boyutunu alır ve dondurur.
{
    int matris2Boyutu = 0;
    do
    {
        printf("Matris2 Boyutu [3][3] icin 3, [5][5] icin 5 = ");
        scanf("%d", &matris2Boyutu);
        if (matris2Boyutu == 3 || matris2Boyutu == 5)
        {
            break;
        }
        else
        {
            printf("Matris2 Boyutu [3][3] veya [5][5] Olmali!\n");
        }
    } while (!(matris2Boyutu == 3 || matris2Boyutu == 5));

    return matris2Boyutu;
}

extern int outputMatrixSizing(int m1Boyut, int m2Boyut, int islemTipi) // Cikti matrisinin boyutunu verilen formule gore hesaplayıp dondurur.

{
    int boyut = 0;
    int D = 0;

    if (islemTipi == 0)
    {
        D = 0;
        boyut = (m1Boyut - m2Boyut) + (2 * D) + 1;
    }
    else if (islemTipi == 1)
    {

        D = (m2Boyut)-1;
        D /= 2;
        boyut = (m1Boyut - m2Boyut) + (2 * D) + 1;
    }

    return boyut;
}
