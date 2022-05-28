/*

* @file islemler.c
* @description Dosyalardaki sayilari toplar.
* @assignment 2.Proje
* @date 23.01.2022
* @author Mehmet  /  mehmet.ozkan@stu.fsm.edu.tr

*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "islemler.h"

extern void displayFile(char *fileName)
{ // dosyadaki verileri ekrana yazdırır.
    FILE *file;
    char ch;
    file = fopen(fileName, "r+");
    if (file == NULL)
    {
        printf("Dosya Acilamadi.");
        exit(1);
    }
    else
    {
        ch = fgetc(file);
        // dosya bitene kadar karakter karakter dosyada dolaşır.
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(file);
        }
    }
    printf("\n");
}

extern void cevir(uint8_t *result, char *yazilacakArray, int size)
{
    // dosyaya yazmak için decimal değerleri karaktere çevirir
    int i = 0;
    for (; i < size; i++)
    {
        char element = *(result + i) + '0';
        *(yazilacakArray + i) = element;
    }
}

extern void toplama(uint8_t *array1, uint8_t *array2, char *resultFile, int length1, int length2)
{

    FILE *file;
    file = fopen(resultFile, "a+");
    int l = (length1 > length2) ? length1 : length2; // hangi arrayin uzun olduğunu bulur
    int sum = length1 + length2;
    int s = sum - l;
    int difference = l - s; // arraylerin boyutu arasındaki fark
    int short_length = s;   // boyutu küçük olan array
    int long_length = l;    // boyutu büyük olan array
    int count = 0;
    int on_hand = 0; // elde
    char *yazilacakArray = calloc(l + 1, sizeof(char));
    uint8_t *result = calloc(l + 1, sizeof(uint8_t));
    uint8_t *düzeltilmisResult = calloc(l + 1, sizeof(uint8_t));

    if (file == NULL)
    {
        printf("Dosya Acilamadi.");
        exit(1);
    }
    else
    {
        // boyutu kücük olan arrayi array2 olarak belirleyip ona göre işlem yapar
        for (int i = short_length - 1; i >= 0; i--)
        {
            int total = *(array2 + i) - '0' + *(array1 + i + difference) - '0' + on_hand;
            int mod = total % 10;
            on_hand = (int)(total / 10);
            *(result + long_length - count) = mod;
            count++;
        }
        // arraylerin boyutları arasındaki fark kadar döner.
        for (int i = difference; i >= 0; i--)
        {
            if (i == 0)
            {
                if (on_hand > 0)
                {
                    *(result + 0) = on_hand;
                }
                else
                {
                    *(result + 0) = 0;
                }
                break;
            }
            int total = *(array1 + i - 1) - '0' + on_hand;
            int mod = total % 10;
            on_hand = (int)(total / 10);
            *(result + i) = mod;
        }
    }
    // farklı türde arrayler için toplamayı doğru yapabilmesi için kontrol => ÖR: 99999 + 00001
    if (*(result + 0) == 0)
    {
        for (int i = 1; i < l + 1; i++)
        {
            *(düzeltilmisResult + i - 1) = *(result + i);
        }
    }
    else
    {
        for (int i = 0; i < l + 1; i++)
        {
            *(düzeltilmisResult + i) = *(result + i);
        }
    }
    // gelen arraylerin boyutuna göre sonuc arrayinin boyutunu doğru şekilde belirlemek için kontrol. => ÖR: 98562 + 54287 = 152.849
    if ((*(array1 + 0) - '0' + *(array2 + 0) - '0' > 9 && length1 == length2) || *(array1 + 0) - '0' + *(array2 + 0) - '0' > 9 && *(array1 + 1) - '0' + *(array2 + 1) - '0' > 9 && length2 == length1)
    {

        cevir(düzeltilmisResult, yazilacakArray, l + 1);
        fprintf(file, "%s\n", yazilacakArray);
        printf("\nToplama Isleminin Sonucu Dosyaya Yazildi.\n");
        fclose(file);
    }
    else
    {
        cevir(düzeltilmisResult, yazilacakArray, l);
        fprintf(file, "%s\n", yazilacakArray);
        printf("\nToplama Isleminin Sonucu Dosyaya Yazildi.\n");
        fclose(file);
    }
    realloc(result, l + 1);
    realloc(yazilacakArray, l + 1);
    realloc(düzeltilmisResult, l + 1);
}

extern void dosyaIslemiToplama(char *fileName1, char *fileName2)
{
    FILE *file1, *file2;
    uint8_t *n1, *n2;
    char ch;
    int length1 = 0;
    int length2 = 0;

    file1 = fopen(fileName1, "r");
    file2 = fopen(fileName2, "r");

    if ((file1 == NULL) || (file2 == NULL))
    {
        printf("Dosyalardan Biri Acilamadi.");
        exit(1);
    }

     uint8_t line1[1000], line2[1000];
    
    rewind(file1);
    rewind(file2);
    // dosya satırlarının sonuna gelene kadar satırları tek tek arraylere atar
    while (1)
    {
        n1 = fgets(line1, sizeof(line1), file1);
        n2 = fgets(line2, sizeof(line2), file2);

        if ((n1 == NULL) || (n2 == NULL))
        {
            break;
        }

        for (int m = 0; m < 1000; m++)
        { // Dosyadan aldığı satırdaki sayının kaç basamaklı olduğunu hesaplamak için.
            if (line1[m] > 47 && line1[m] < 58)
            { // ASCII karakter tablosundan rakam olup olmamasının kontrolü.

                length1++;
            }

            else
            {
                break;
            }
        }

        for (int m = 0; m < 1000; m++)
        { // Dosyadan aldığı satırdaki sayının kaç basamaklı olduğunu hesaplamak için.

            if (line2[m] > 47 && line2[m] < 58)
            { // ASCII karakter tablosundan rakam olup olmamasının kontrolü.

                length2++;
            }

            else
            {
                break;
            }
        }
        // toplama işleminin algoritmasının doğru çalışabilmesi için array uzunluğuna göre parametre sırası kontrolü.
        if (length1 > length2)
            toplama(line1, line2, "result.txt", length1, length2);
        else
            toplama(line2, line1, "result.txt", length1, length2);

        length1 = 0;
        length2 = 0;
    }
    fclose(file1);
    fclose(file2);

    printf("\n");
}

extern void cikarma(uint8_t *array1, uint8_t *array2, char *resultFile, int length1, int length2)
{

    FILE *file;
    file = fopen(resultFile, "a+");
    int l = (length1 > length2) ? length1 : length2;
    int sum = length1 + length2;
    int s = sum - l;
    int difference = l - s;
    int on_hand = 0;
    char *yazilacakArray = calloc(l, sizeof(char));
    uint8_t *result = calloc(l, sizeof(uint8_t));

    // kısa olan arrayin uzunluğu kadar döner.
    for (int i = s - 1; i >= 0; i--)
    {

        if ((*(array1 + i + difference) - '0') - on_hand >= 0)
        {

            int temp = ((*(array1 + i + difference) - '0') - on_hand) - (*(array2 + i) - '0');
            if (on_hand > 0)
                on_hand--;
            if (temp < 0)
            {
                temp += 10;
                on_hand += 1;
            }
            *(result + i + difference) = temp;
        }
    }
    // arraylerin boyutları arasındaki fark kadar döner.
    for (int i = difference - 1; i >= 0; i--)
    {

        int temp = (*(array1 + i) - '0') - on_hand;
        if (on_hand > 0)
            on_hand--;
        if (temp < 0)
        {
            on_hand += 1;
            temp += 10;
        }
        *(result + i) = temp;
    }

    cevir(result, yazilacakArray, l);
    fprintf(file, "%s\n", yazilacakArray);
    printf("\nCikarma Isleminin Sonucu Dosyaya Yazildi.\n");
    fclose(file);
    realloc(result, l);
}

extern void dosyaIslemiCikarma(char *fileName1, char *fileName2)
{
    FILE *file1, *file2;
    uint8_t *n1, *n2;
    char ch;
    int length1 = 0;
    int length2 = 0;

    file1 = fopen(fileName1, "r");
    file2 = fopen(fileName2, "r");

    if ((file1 == NULL) || (file2 == NULL))
    {
        printf("Dosyalardan Biri Acilamadi.");
        exit(1);
    }

    uint8_t line1[1000], line2[1000];
    rewind(file1);
    rewind(file2);

    // dosya satırlarının sonuna gelene kadar satırları tek tek arraylere atar
    while (1)
    {
        n1 = fgets(line1, sizeof(line1), file1);
        n2 = fgets(line2, sizeof(line2), file2);

        if ((n1 == NULL) || (n2 == NULL))
        {
            break;
        }

        for (int m = 0; m < 1000; m++)
        { // Dosyadan aldığı satırdaki sayının kaç basamaklı olduğunu hesaplamak için.
            if (line1[m] > 47 && line1[m] < 58)
            { // ASCII karakter tablosundan rakam olup olmamasının kontrolü.

                length1++;
            }

            else
            {
                break;
            }
        }

        for (int m = 0; m < 1000; m++)
        { // Dosyadan aldığı satırdaki sayının kaç basamaklı olduğunu hesaplamak için.

            if (line2[m] > 47 && line2[m] < 58)
            { // ASCII karakter tablosundan rakam olup olmamasının kontrolü.

                length2++;
            }

            else
            {
                break;
            }
        }

        // çıkarma işleminin algoritmasının doğru çalışabilmesi için array uzunluğuna göre parametre sırası kontrolü.
        if (length1 > length2 || (length1 == length2 && (line1[0] > line2[0])))
            cikarma(line1, line2, "result.txt", length1, length2);
        else
            cikarma(line2, line1, "result.txt", length1, length2);

        length1 = 0;
        length2 = 0;
    }

    printf("\n");
}
