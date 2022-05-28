/*

* @file matrisoperations.h
* @description matrise operasyona gore islem uygular
* @assignment 1.Proje
* @date 12.12.2021
* @author Mehmet  /  mehmet.ozkan@stu.fsm.edu.tr

*/

#ifndef matrisoperations_h
#define matrisoperations_h

static int **operasyon1(int **matris1, int **matris2, int islemTipi, int, int, int);
static int matrix1Sizing();
static int matrix2Sizing();
static int outputMatrixSizing(int, int, int);
static int **matrixGenerate(int, int);
static void matrixFillRandom(int **, int, int);
static void matrix1FillExampleSenaryo1(int **, int, int);
static void matrix1FillExampleSenaryo2(int **, int, int);
static void matrix2FillExampleSenaryo1(int **, int, int);
static void matrix2FillExampleSenaryo2(int **, int, int);
static void matrixPrint(int **, int, int);
static void matrixFillWith0(int **, int, int);
static int **genislet(int **, int, int);
/*
int **operasyon1(int **matris1, int **matris2, int islemTipi, int, int, int);
int matrix1Sizing();
int matrix2Sizing();
int outputMatrixSizing(int, int, int);
int **matrixGenerate(int, int);
void matrixFillRandom(int **, int, int);
void matrix1FillExampleSenaryo1(int **, int, int);
void matrix1FillExampleSenaryo2(int **, int, int);
void matrix2FillExampleSenaryo1(int **, int, int);
void matrix2FillExampleSenaryo2(int **, int, int);
void matrixPrint(int **, int, int);
void matrixFillWith0(int **, int, int);
int **genislet(int **, int, int);*/

#endif
