//
// Created by Margarita on 01.11.2022.
//

#include <stdio.h>
#include "../library/matrixlib.h"
#include "../library/source/matrix.c"

int main() {
    matrix *Matrix = newMatrix(2, 4);
    fillRandom(Matrix, 10, 50);
    printf("Матрица №1 :\n");
    showMatrix(Matrix);
    printf("\n\n");
    printf("Транспонированная матрица 2х4 :\n");
    Matrix = transposition(Matrix);
    showMatrix(Matrix);
    printf("\n\n");

    matrix *Matrix3 = newMatrix(3, 3);
    matrix *Matrix4 = newMatrix(3, 3);
    Matrix3 = fillRandom(Matrix3, 1, 9);
    Matrix4 = fillRandom(Matrix4, 10, 19);

    printf("Матрица №2 :\n");
    showMatrix(Matrix3);
    printf("Матрица №3 :\n");
    showMatrix(Matrix4);
    matrix *MatrixProducts;
    MatrixProducts = summarize(Matrix3, Matrix4);
    printf("Сумма матриц №3 и №4 :\n");
    showMatrix(MatrixProducts);
    MatrixProducts = multiplication(Matrix3, Matrix4);
    printf("Произведение матриц №3 и №4 :\n");
    showMatrix(MatrixProducts);
    MatrixProducts = difference(Matrix3, Matrix4);
    printf("Разность матриц №3 и №4 :\n");
    showMatrix(MatrixProducts);
    destructor(MatrixProducts);
    printf("Удаление матрицы :\n");
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