#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
#include "time.h"
#include "windows.h"

//
//
//
struct matrix *newMatrix(int size_n, int size_m) {
    struct matrix *currentMatrix = (struct matrix *) malloc(sizeof(struct matrix));
//
    currentMatrix->size_n = size_n;
    currentMatrix->size_m = size_m;
    currentMatrix->array = (int **) malloc(size_n * sizeof(int));
    for (int i = 0; i < size_n; i++) {
        currentMatrix->array[i] = (int *) malloc(size_m * sizeof(int));
    }
    return currentMatrix;
};

//
//
//
void destructor(struct matrix Matrix) {
    for (int i = 0; i < Matrix.size_n; i++) {
        free(Matrix.array[i]);
    }
    free(Matrix.array);
}

//
//
//
struct matrix *fill(struct matrix *Matrix) {
    for (int i = 0; i < Matrix->size_n; i++) {
        for (int j = 0; j < Matrix->size_m; j++) {
            scanf("%d", &Matrix->array[i][j]);
        }
    }
    return Matrix;
}

//
//
//
struct matrix *summarize(struct matrix Matric1, struct matrix Matric2) {
    struct matrix *Matric = newMatrix(Matric1.size_n, Matric1.size_m);
    for (int i = 0; i < Matric1.size_n; ++i) {
        for (int j = 0; j < Matric1.size_m; j++) {
            Matric->array[i][j] = Matric1.array[i][j] + Matric2.array[i][j];
        }
    }
    return Matric;
}

//
//
//
struct matrix *fillRandom(struct matrix *Matric, int d1, int d2) {
    srand(time(NULL));
    //  throw (new int**);
    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            Matric->array[i][j] = d1 + rand() % (d2 - d1 + 1);
        }
    }
    return Matric;
}

//
//
//
struct matrix *product(struct matrix Matric1, struct matrix Matric2) {
    struct matrix *Matric = newMatrix(Matric1.size_n, Matric2.size_m);
    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; ++j) {
            for (int k = 0; k < Matric1.size_m; ++k) {
                Matric->array[i][j] += Matric1.array[i][k] * Matric2.array[k][j];
            }
        }
    }
    return Matric;
}

//
//
//
struct matrix *transporant(struct matrix *Matrix) {
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
struct matrix *copy(struct matrix *Matric, struct matrix *CopyMatric) {
    CopyMatric = newMatrix(Matric->size_n, Matric->size_m);
    CopyMatric->array = Matric->array;
    return CopyMatric;
}

//
//
//
void showMatrix(struct matrix *Matric) {
//    system("chcp 65001");
//    SetConsoleOutputCP(CP_UTF8);
    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            printf("%d ", Matric->array[i][j]);
        }
        printf("\n");
    }
    printf("%s","Вы молодец!");
}
