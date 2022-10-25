#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

struct matric *newMatric(int size_n, int size_m) {
    struct matric *currentMatric = (struct matric *) malloc(sizeof(struct matric));

    currentMatric->size_n = size_n;
    currentMatric->size_m = size_m;
    currentMatric->array = (int **) malloc(size_n * sizeof(int));
    for (int i = 0; i < size_n; i++) {
        currentMatric->array[i] = (int *) malloc(size_m * sizeof(int));
    }
};

void destructor(struct matric Matric) {
    for (int i = 0; i < Matric.size_n; i++) {
        free(Matric.array[i]);
    }
    free(Matric.array);
}

struct matric *fill(struct matric Matric) {

}

struct matric *summarize(struct matric Matric1, struct matric Matric2) {

}

struct matric *product(struct matric Matric1, struct matric Matric2) {

}

struct matric *transporant(struct matric Matric) {

}

struct matric *copy(struct matric Matric) {

}

void showMatric(struct matric Matric);

int main() {
    return 0;
}
