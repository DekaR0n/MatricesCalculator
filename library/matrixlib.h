#ifndef __matrixlib__
#define __matrixlib__

#include "stdio.h"
#include <stdlib.h>

typedef struct matrix {
    int size_n;
    int size_m;
    int **array;
} matrix;

matrix *newMatrix(int size_n, int size_m);

void destructor(matrix *Matrix);

matrix *fillRandom(matrix *Matrix, int d1, int d2);

matrix *summarize(matrix *Matrix1, matrix *Matrix2);

matrix *difference(matrix *Matrix1, matrix *Matrix2);

matrix *multiplication(matrix *Matrix1, matrix *Matrix2);

matrix *transposition(matrix *Matrix);

matrix *copy(matrix *Matrix, matrix *CopyMatrix);

void showMatrix(matrix *Matrix);

#endif //__matrixlib__