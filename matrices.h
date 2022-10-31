#ifndef __matrices__
#define __matrices__

#include "stdio.h"
#include <stdlib.h>

struct matric {
    int size_n;
    int size_m;
    int **array;
};

struct matric *newMatric(int size_n, int size_m);

void destructor(struct matric Matric);

struct matric *fill(struct matric Matric);

struct matric *fillRandom(struct matric Matric, int d1, int d2);

struct matric *summarize(struct matric Matric1, struct matric Matric2);

struct matric *product(struct matric Matric1, struct matric Matric2);

struct matric *transporant(struct matric *Matric);

struct matric *copy(struct matric Matric);

void showMatric(struct matric *Matric);

#endif //__matrices__