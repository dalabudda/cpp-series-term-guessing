#include <stdlib.h>
#include <time.h>

#include "Series.h"

#define MAX_BASE 32
#define MAX_DIFFERENCE 100
#define MAX_FACTOR 10


Series* getRandomSeries()
{
    srand (time(NULL));
    if (rand()%2)
        return new ArithmeticSeries(rand()%MAX_BASE+1, rand()%MAX_DIFFERENCE+1);
    else
        return new GeometricSeries(rand()%MAX_BASE+1, rand()%MAX_FACTOR+1);
}

int* getFourTerms()
{
    Series& series = *getRandomSeries();

    int* terms = new int[4];
    terms[0] = series.getNthTerm(1);
    terms[1] = series.getNthTerm(2);
    terms[2] = series.getNthTerm(3);
    terms[3] = series.getNthTerm(4);

    return terms;
}
