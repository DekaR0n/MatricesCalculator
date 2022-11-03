//
// Created by Margarita on 01.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
#include "time.h"

int main() {
    struct matrix *Matrix = newMatrix(2, 4);

  /*  for (int i = 0; i < Matrix->size_n; i++) {
        for (int j = 0; j < Matrix->size_m; j++) {
            Matrix->array[i][j] = i == j + 1 ? 15 : 2;
        }
    }*/
    fillRandom(Matrix,10,50);
    showMatrix(Matrix);
    printf("\n\n");
    Matrix = transporant(Matrix);
    showMatrix(Matrix);

   // struct matrix *Copy;

    return 0;
}