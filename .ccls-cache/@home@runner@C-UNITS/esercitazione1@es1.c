/* Esercitazione 1: programma per il calcolo della succesione di una funzione di sommatoria, x^n/k! con k che va da 0 a n. Si vuole calcolare l'ennesimo termine della succesione e stamparlo a schermo con i singoli termini della succesione, partendo da uno user input di x e n.*/

#include <stdio.h>
#include <stdlib.h>

// creo la funzione per il calcolo del fattoriale in maniera ricorsiva
int fattoriale(int k)
{
    if(k == 0)
        return 1;
    return k * fattoriale(k - 1);
}

// creo la funzione per il calcolo della potenza in maniera ricorsiva
float potenza(float a, int b)
{
    if(b == 0)
        return 1;
    return a * potenza(a, b - 1);
}

// creo la funzione per il calcolo della sommatoria in maniera iterativa
float sommatoria_iterativa(float x, int n)
{
    float somma = 0;
    for(int i = 0; i <= n; i++)
    {
        somma = somma + ((float)potenza(x, i) / (float)fattoriale(i));
    }
    return somma;
}

// creo la funzione per il calcolo della sommatoria in maniera ricorsiva
float sommatoria_ricorsiva(float x, int n)
{
    if(n == 0)
        return 1.0;
    return (potenza(x, n) / (float)fattoriale(n)) + sommatoria_ricorsiva(x, n - 1);
}

// creo la funzione per allocare trammite un ciclo for ogni 
// elemento della succesione nellamemoria dinamica
float* array_somma(float x, int n)
{
    float* a = malloc(sizeof(float) * n);

    for(int i = 0; i < n; i++)
    {
        a[i] = sommatoria_iterativa(x, i);
    }

    return a;
}

// linea di comando 
int main()
{

    // richiedo i valori in input
    float x;
    int n;
    printf("Inserisci il valore di x\n");
    scanf("%f", &x);
    printf("Inserisci il valore di n\n");
    scanf("%d", &n);

    // creo la lista linkata
    float* p;
    p = array_somma(x, n);

    // stampo a schermo la succesione(il contenuto della lista) 
    // e la sommatoria della succesione(sommatoria_ricorsiva/iterativa)
    printf("[");
    for(int i = 0; i < 10; i++)
        printf("%.3f ", p[i]);
    printf("]\n");
    free(p);
    float sommatoria = sommatoria_iterativa( x, n);
    printf("La sommatoria della succesione e': %f\n", sommatoria);

    return 0;
}

