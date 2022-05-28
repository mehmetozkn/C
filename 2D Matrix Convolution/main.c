/*

* @file main.c
* @description matrise operasyona gore islem uygular
* @assignment 1.Proje
* @date 9.12.2021
* @author Mehmet  /  mehmet.ozkan@stu.fsm.edu.tr

*/

#include <stdio.h>
#include <stdlib.h>
#include "matrisoperations.c"

int main()
{
    int **matrix1;
    int **matrix2;
    int **resultMatrix;
    int secim = 0;
    int islemTipi;
    int sizeOutputMatrix;

    while (secim != -1)
    {
        printf("\nProgrami Verilen Ornekteki Gibi Mi Calistirmak Istiyorsunuz ?\n");
        printf("Senaryo 1 icin 1'e Basiniz\nSenaryo 2 icin 2'ye Basiniz\n");
        printf("Matrisleri Kendi Girdiginiz Boyutta Rastgele Sayilarla Olusturmak icin 3'e Basiniz\n");
        printf("Cikis icin -1'e Basiniz\n");
        printf("Secim = ");
        scanf("%d", &secim);

        if (secim == 1)
        {
            // Senaryo 1 => Matris 1 = [5][5], Matris 2 = [3][3], Islem Tipi = 0
            printf("\nProgram Senaryo 1'e Gore Calistiriliyor...\n\n");

            matrix1 = matrixGenerate(5, 5);            // Matris1'i olusturur.
            matrix2 = matrixGenerate(3, 3);            // Matris2'yi olusturur.
            matrix1FillExampleSenaryo1(matrix1, 5, 5); // Matris1'in icini senaryo 1'deki gibi doldurur.
            matrix2FillExampleSenaryo1(matrix2, 3, 3); // Matris1'nin icini senaryo 1'deki gibi doldurur.

            printf("Matris 1\n");
            matrixPrint(matrix1, 5, 5); // Matris1'i yazdirir.

            printf("------------------------------------\n");

            printf("Matris 2\n");
            matrixPrint(matrix2, 3, 3); // Matris2'yi yazdirir.

            sizeOutputMatrix = outputMatrixSizing(5, 3, 0); // Cikti matrisinin boyutunu senaryo 1'deki gibi belirler.

            printf("------------------------------------\n");

            resultMatrix = operasyon1(matrix1, matrix2, islemTipi, 5, 3, sizeOutputMatrix); // Operasyona gore cikti matrisini olusturup yazdirir.
            matrixPrint(resultMatrix, sizeOutputMatrix, sizeOutputMatrix);
            printf("\n****************************\n");
            free(matrix1);      // alanı iade etmek icin.
            free(matrix2);      // alanı iade etmek icin.
            free(resultMatrix); // alanı iade etmek icin.
        }
        else if (secim == 2)
        {
            // Senaryo 2 => Matris 1 = [5][5], Matris 2 = [3][3], Islem Tipi = 1
            printf("\nProgram Senaryo 2'ye Gore Calistiriliyor...\n\n");
            matrix1 = matrixGenerate(5, 5);            // Matris1'i olusturur.
            matrix2 = matrixGenerate(3, 3);            // Matris2'yi olusturur.
            matrix1FillExampleSenaryo2(matrix1, 5, 5); // Matris1'in icini senaryo 2'deki gibi doldurur.
            matrix2FillExampleSenaryo2(matrix2, 3, 3); // Matris2'nin icini senaryo 2'deki gibi doldurur.

            printf("Matris 1\n");
            matrixPrint(matrix1, 5, 5); // Matris1'i yazdirir.

            printf("------------------------------------\n");

            printf("Matris 2\n");
            matrixPrint(matrix2, 3, 3); // Matris2'yi yazdirir.

            sizeOutputMatrix = outputMatrixSizing(5, 3, 1); // Cikti matrisinin boyutunu senaryo 1'deki gibi belirler.

            printf("------------------------------------\n");

            resultMatrix = operasyon1(genislet(matrix1, 5, 5), matrix2, islemTipi, 7, 3, sizeOutputMatrix); // Operasyona gore cikti matrisini olusturup yazdirir.
            matrixPrint(resultMatrix, sizeOutputMatrix, sizeOutputMatrix);
            printf("\n****************************\n");
            free(matrix1);      // alanı iade etmek icin.
            free(matrix2);      // alanı iade etmek icin.
            free(resultMatrix); // alanı iade etmek icin.
        }
        else if (secim == 3)
        {

            int matris1Boyutu = matrix1Sizing(); // Matris1'in boyutunu kullanicidan alır ve belirler.
            int matris2Boyutu = matrix2Sizing(); // Matris2'nin boyutunu kullanicidan alır ve belirler.
            printf("\nIslem Tipi = ");
            scanf("%d", &islemTipi);                                                        // Islem tipini kullanicidan alir.
            sizeOutputMatrix = outputMatrixSizing(matris1Boyutu, matris2Boyutu, islemTipi); // Kullanicidan aldigi islem tipine gore cikti matrisinin boyutunu belirler.
            printf("Cikti Matrisi Boyutu %d Olarak Hesaplandi.\n", sizeOutputMatrix);
            matrix1 = matrixGenerate(matris1Boyutu, matris1Boyutu); // Matris1'i olusturur.
            matrix2 = matrixGenerate(matris2Boyutu, matris2Boyutu); // Matris2'yi olusturur.

            matrixFillRandom(matrix1, matris1Boyutu, matris1Boyutu); // Matris1'i rastgele sayilarla doldurur.
            matrixFillRandom(matrix2, matris2Boyutu, matris2Boyutu); // Matris2'yi rastgele sayilarla doldurur.

            printf("Matris 1\n");
            matrixPrint(matrix1, matris1Boyutu, matris1Boyutu); // Matris1'i yazdirir.

            printf("------------------------------------\n");

            printf("Matris 2\n");
            matrixPrint(matrix2, matris2Boyutu, matris2Boyutu); // Matris2'yi yazdirir.
            printf("------------------------------------\n");

            if (islemTipi == 0)
            {
                resultMatrix = operasyon1(matrix1, matrix2, islemTipi, matris1Boyutu, matris2Boyutu, sizeOutputMatrix); // Operasyona gore cikti matrisini olusturup yazdirir.
            }
            else if (islemTipi == 1)
            {

                resultMatrix = operasyon1(genislet(matrix1, matris1Boyutu, matris1Boyutu), matrix2, islemTipi, matris1Boyutu + 2, matris2Boyutu, sizeOutputMatrix); // Operasyona gore cikti matrisini olusturup yazdirir.
            }
            matrixPrint(resultMatrix, sizeOutputMatrix, sizeOutputMatrix);
            free(matrix1);      // alanı iade etmek icin.
            free(matrix2);      // alanı iade etmek icin.
            free(resultMatrix); // alanı iade etmek icin.
        }
        else
        {
            printf("Hatalı Girdi Yaptınız. Program Sonlandırılıyor...");
            return 1;
        }
    }

    printf("\n");
    return 0;
}
