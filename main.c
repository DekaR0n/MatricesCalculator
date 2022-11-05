//
// Created by Margarita on 01.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
#include "time.h"

int main() {
    struct matrix *Matrix = newMatrix(2, 4);

    fillRandom(Matrix, 10, 50);
    showMatrix(Matrix);
    printf("\n\n");
    Matrix = transposition(Matrix);
    showMatrix(Matrix);

    struct matrix *Matrix3 = newMatrix(3, 3);
    struct matrix *Matrix4 = newMatrix(3, 3);
    Matrix3 = fillRandom(Matrix3, 4, 5);
    Matrix4 = fillRandom(Matrix4, 2, 4);
    showMatrix(Matrix3);
    showMatrix(Matrix4);
    struct matrix *MatrixProducts;
    MatrixProducts = summarize(Matrix3, Matrix4);
    showMatrix(MatrixProducts);

   /* struct matrix *Matrix1 = newMatrix(3, 3);
    struct matrix *Matrix2 = newMatrix(3, 1);
    Matrix1 = fillRandom(Matrix1, 4, 5);
    Matrix2 = fillRandom(Matrix2, 2, 4);
    showMatrix(Matrix1);
    showMatrix(Matrix2);
    struct matrix *MatrixProduct = product(Matrix1, Matrix2);
    showMatrix(MatrixProduct);
    // struct matrix *Copy;*/


    return 0;
}