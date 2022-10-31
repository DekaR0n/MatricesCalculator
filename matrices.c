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
    return currentMatric;
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
    struct matric *Matric;
    Matric.array = (int **) newMatric(n, m);
    for (int i = 0; i < Matric1.size_n; ++i) {
        for (int j = 0; j < Matric1.size_m; j++) {
            Matric.array[i][j] = Matric1.array[i][j] + Matric2.array[i][j];
        }
    }
    return Matric;
}

struct matric *fillRandom(struct matric *Matric, int d1, int d2) {
    srand(time(NULL));
    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            Matric->array[i][j] = d1 + rand() % d2;
        }
    }
    return Matric;
}

struct matric *product(struct matric Matric1, struct matric Matric2) {
    struct matric *Matric = newMatric(Matric.size_n, Matric2.size_m);
    for (int i =0;i<Matric->size_n; i++){
        for (int j = 0; j < Matric->size_m; ++j) {
            for (int k = 0; k < Matric1.size_m; ++k) {
                Matric->array[i][j] += Matric1.array[i][k]*Matric2.array[k][j];
            }
        }
    }
    return Matric;
}

struct matric *transporant(struct matric *Matric) {
    struct matric *Tmatric = newMatric(Matric->size_m, Matric->size_n);
    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            Tmatric->array[i][j] = Matric->array[j][i];
        }

    }
    return Tmatric;
}

struct matric *copy(struct matric *Matric, struct matric *CopyMatric) {
    CopyMatric= newMatric(Matric->size_n, Matric->size_m);
    CopyMatric->array = Matric->array;
    return CopyMatric;
}

void showMatric(struct matric *Matric) {
    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            printf("%d ", Matric->array[i][j]);
        }
        printf("\n");
    }
}

/*int main() {
    /*  struct matric Matric;
      destructor(Matric);
    struct matric *Matric;
    Matric = newMatric(3, 8);

    for (int i = 0; i < Matric->size_n; i++) {
        for (int j = 0; j < Matric->size_m; j++) {
            Matric->array[i][j] = 234;
        }
    }
    showMatric(Matric);

return 0;
}*/
