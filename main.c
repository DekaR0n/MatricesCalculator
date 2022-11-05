//
// Created by Margarita on 01.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
#include "time.h"

int main() {
    struct matrix *Matrix = newMatrix(2, 4);

    fillRandom(Matrix,10,50);
    showMatrix(Matrix);
    printf("\n\n");
    Matrix = transporant(Matrix);
    showMatrix(Matrix);

    struct matrix *Matrix1 =newMatrix(3, 3);
    struct matrix *Matrix2 =newMatrix(3, 1);
    Matrix1 = fillRandom(Matrix1, 4, 5);
    Matrix2 = fillRandom(Matrix2, 2, 4);
    showMatrix(Matrix1);
    showMatrix(Matrix2);
    struct matrix *MatrixProduct = product(Matrix1,Matrix2);
    showMatrix(MatrixProduct);
   // struct matrix *Copy;

    return 0;
}