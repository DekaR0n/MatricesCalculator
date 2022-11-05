#ifndef __matrices__
#define __matrices__

#include "stdio.h"
#include <stdlib.h>

struct matrix {
    int size_n;
    int size_m;
    int **array;
};

struct matrix *newMatrix(int size_n, int size_m);

void destructor(struct matrix Matrix);

struct matrix *fill(struct matrix *Matrix);

struct matrix *fillRandom(struct matrix *Matrix, int d1, int d2);

struct matrix *summarize(struct matrix Matrix1, struct matrix Matrix2);

struct matrix *product(struct matrix *Matrix1, struct matrix *Matrix2);

struct matrix *transporant(struct matrix *Matrix);

struct matrix *copy(struct matrix *Matrix, struct matrix *CopyMatrix);

void showMatrix(struct matrix *Matrix);

#endif //__matrices__