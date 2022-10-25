#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
#include "time.h"

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
    for (int i = 0; i < Matric.size_n; i++) {
        for (int j = 0; j < Matric.size_m; j++) {
            scanf("%d", &Matric.array[i][j]);
        }
    }
}

struct matric *summarize(struct matric Matric1, struct matric Matric2) {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    struct matric Matric;
    Matric.array = (int **) newMatric(n, m);
    for (int i = 0; i < Matric1.size_n; ++i) {
        for (int j = 0; j < Matric1.size_m; j++) {
            Matric.array[i][j] = Matric1.array[i][j] + Matric2.array[i][j];
        }
    }
}

struct matric *fillRandom(struct matric Matric) {
    srand(time(NULL));
    int random = rand()
}

struct matric *product(struct matric Matric1, struct matric Matric2) {

}

struct matric *transporant(struct matric Matric) {

}

struct matric *copy(struct matric Matric) {

}

void showMatric(struct matric Matric) {

}

int main() {
    return 0;
}
