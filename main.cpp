#include <stdio.h>
#include "RandomSeriesFactory.h"

#define MAX_VALUE 32000

bool scanInput(int &input)
{
    if (!scanf("%i", &input))
    {
        fflush(stdin);
        return false;
    }
    if (input < 1 || input > MAX_VALUE)
        return false;
    return true;
}

int main()
{
    int* a = getFourTerms();

    printf("Pierwsze wyrazy ciagu: %i, %i, %i \nNastepny wyraz: ", a[0], a[1], a[2]);

    int input;
    while (!scanInput(input))
        printf("Niepoprawne dane wejsciowe :( \nPodaj liczbe miedzy 1 a %d: ", MAX_VALUE);

    if (input == a[3])
        printf("Gratulacje! Poprawna odpowiedz. ");
    else
        printf("Niestety odpowiedz jest niepoprawna :( ");

    scanf("%i", &input);//PAUSE

    delete[] a;

    return 0;
}
