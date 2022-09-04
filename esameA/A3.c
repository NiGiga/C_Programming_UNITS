/*
SOMMATORIA SOTTO RADICE
*/
#include <stdio.h>
#include <math.h>

int potenza(int base, int esponente);
float sucessione(int a[], int dim);

int main()
{
    // per usare sqrt bisogna scrivere nella shell -lm alla fine della chiamata
    // in questo caso " gcc esameA/A3.c -o main -lm "
    int a[6] = {1, 2, 3, 4, 5};
    double succ =sucessione(a, 6);
    printf("%2.f", succ);

    return 0;
}

int potenza(int base, int esponente)
{
    if(esponente == 0)
        return 1;
    return base * potenza(base, esponente - 1);
}

// mi = 1/n * sommatoria x_i
double mi(int a[], int dim)
{
    int somma = 0;
    for(int i = 0; i < dim; i++)
    {
        somma = somma + a[i];
    }

    return somma / dim;
}
// succ = [sommatoria di (x_i - mi)]/n
float sucessione(int a[], int dim)
{
    double lol = 0.0;
    double my = mi(a, dim);

    for(int i = 0; i < dim; i++)
    {
        lol = lol + potenza(a[i] + my, 2);
    }

    int result = sqrt(lol/dim);
    return result;
}

