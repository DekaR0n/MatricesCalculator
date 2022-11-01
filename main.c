//
// Created by Margarita on 01.11.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
#include "time.h"
int main() {
    struct matric *Matric;
    Matric = newMatric(3, 8);

    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            Matric->array[i][j] = 234;
        }
    }
    showMatric(Matric);

    return 0;
}