#include <stdio.h>
#include <stdlib.h>
#include "../matrixlib.h"
#include "time.h"

//
//
//
struct matrix *newMatrix(int size_n, int size_m) {
    struct matrix *currentMatrix = (struct matrix *) malloc(sizeof(struct matrix));

    currentMatrix->size_n = size_n;
    currentMatrix->size_m = size_m;
    currentMatrix->array = (int **) malloc(size_n * sizeof(int));
    for (int i = 0; i < size_n; i++) {
        currentMatrix->array[i] = (int *) malloc(size_m * sizeof(int));
    }
    return currentMatrix;
}

//
//
//
void destructor(struct matrix *Matrix) {
    for (int i = 0; i < Matrix->size_n; i++) {
        free(Matrix->array[i]);
    }
    free(Matrix->array);
}

//
//
//
struct matrix *summarize(struct matrix *Matrix1, struct matrix *Matrix2) {
    if ((Matrix1->size_m != Matrix2->size_m) || (Matrix1->size_n != Matrix2->size_n)) {
        return NULL;
    }
    struct matrix *Matrix = newMatrix(Matrix1->size_n, Matrix1->size_m);
    for (int i = 0; i < Matrix1->size_n; ++i) {
        for (int j = 0; j < Matrix1->size_m; j++) {
            Matrix->array[i][j] = Matrix1->array[i][j] + Matrix2->array[i][j];
        }
    }
    return Matrix;
}

//
//
//
struct matrix *difference(struct matrix *Matrix1, struct matrix *Matrix2) {
    if ((Matrix1->size_m != Matrix2->size_m) || (Matrix1->size_n != Matrix2->size_n)) {
        return NULL;
    }
    struct matrix *Matrix = newMatrix(Matrix1->size_n, Matrix1->size_m);
    for (int i = 0; i < Matrix1->size_n; ++i) {
        for (int j = 0; j < Matrix1->size_m; j++) {
            Matrix->array[i][j] = Matrix1->array[i][j] - Matrix2->array[i][j];
        }
    }
    return Matrix;
}

//
//
//
struct matrix *fillRandom(struct matrix *Matrix, int d1, int d2) {
    srand(time(NULL));
    for (int i = 0; i < Matrix->size_n; i++) {
        for (int j = 0; j < Matrix->size_m; j++) {
            Matrix->array[i][j] = d1 + rand() % (d2 - d1 + 1);
        }
    }
    return Matrix;
}

//
//
//
struct matrix *product(struct matrix *Matrix1, struct matrix *Matrix2) {
    if (Matrix1->size_m != Matrix2->size_n) {
        return NULL;
    }
    struct matrix *Matrix = newMatrix(Matrix1->size_n, Matrix2->size_m);
    for (int i = 0; i < Matrix1->size_n; i++) {
        for (int j = 0; j < Matrix2->size_m; j++) {
            Matrix->array[i][j] = 0;
            for (int k = 0; k < Matrix1->size_m; k++) {
                Matrix->array[i][j] += Matrix1->array[i][k] * Matrix2->array[k][j];
            }
        }
    }
    return Matrix;
}

//
//
//
struct matrix *transposition(struct matrix *Matrix) {
    struct matrix *Tmatrix = newMatrix(Matrix->size_m, Matrix->size_n);
    for (int i = 0; i < Matrix->size_m; i++) {
        for (int j = 0; j < Matrix->size_n; j++) {
            Tmatrix->array[i][j] = Matrix->array[j][i];
        }
    }
    return Tmatrix;
}

//
//
//
struct matrix *copy(struct matrix *Matrix, struct matrix *CopyMatrix) {
    CopyMatrix = newMatrix(Matrix->size_n, Matrix->size_m);
    CopyMatrix->array = Matrix->array;
    return CopyMatrix;
}

//
//
//
void showMatrix(struct matrix *Matrix) {
    for (int i = 0; i < Matrix->size_n; i++) {
        for (int j = 0; j < Matrix->size_m; j++) {
            printf("%d ", Matrix->array[i][j]);
        }
        printf("\n");
    }
}
