#ifndef __matrixlib__
#define __matrixlib__

#include "stdio.h"
#include <stdlib.h>

typedef struct matrix {
    int size_n;
    int size_m;
    int **array;
} matrix;

// Создает новую матрицу и инициализирует ее размерами nxm.
matrix *newMatrix(int size_n, int size_m);

// Удаление матрицы.
void destructor(matrix *Matrix);

// Заолнение матрицы случайными числами в заданном диапазоне.
matrix *fillRandom(matrix *Matrix, int d1, int d2);

// Суммирование матриц.
matrix *summarize(matrix *Matrix1, matrix *Matrix2);

// Разность матриц.
matrix *difference(matrix *Matrix1, matrix *Matrix2);

// Произведение матриц.
matrix *multiplication(matrix *Matrix1, matrix *Matrix2);

// Транспонирование матрицы.
matrix *transposition(matrix *Matrix);

// Копирование матрицы.
matrix *copy(matrix *Matrix, matrix *CopyMatrix);

// Печать матрицы.
void showMatrix(matrix *Matrix);

#endif //__matrixlib__