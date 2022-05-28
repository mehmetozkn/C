/*

* @file islemler.h
* @description Dosyalardaki sayilari toplar.
* @assignment 2.Proje
* @date 23.01.2022
* @author Mehmet  /  mehmet.ozkan@stu.fsm.edu.tr

*/

#include <stdint.h>
#ifndef matrisoperations_h
#define matrisoperations_h

static void cevir(uint8_t *result, char *yazilacakArray, int size);
static void displayFile(char *fileName);
static void toplama(uint8_t *array1, uint8_t *array2, char *resultFile, int length1, int length2);
static void dosyaIslemiToplama(char *fileName1, char *fileName2);
static void cikarma(uint8_t *array1, uint8_t *array2, char *resultFile, int length1, int length2);
static void dosyaIslemiCikarma(char *fileName1, char *fileName2);

#endif