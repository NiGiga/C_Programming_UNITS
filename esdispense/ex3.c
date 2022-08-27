/*Esercizio 9.3. Si scriva un programma capace di compiere le 4 operazioni
(somma, sottrazione, moltiplicazione e divisione) tra due numeri reali inseriti
da tastiera. Dopo che sono stati inseriti i due numeri, detti a e b, il programma
dovrà visualizzare i quattro valori a + b, a − b, ab, a/b. Si ipotizzi che b ̸= 0.
Esempio di output.
> Inserisci il primo numero (a): 16
> Inserisci il secondo numero (b): 4
> La somma a + b è: 20
> La differenza a - b è: 12
> Il prodotto a * b è: 64
> La divisone a / b è: 4*/


#include <stdio.h>

int main() {

    int a, b, sum, dif, prod, div;
    

    printf("Inserisci il primo numero:");
    scanf("%d", &a);

    printf("Inserisci il secondo numero:");
    scanf("%d", &b);

    sum = a + b;
    
    dif = a - b;

    prod = a * b;

    div = a / b;

    printf("La somma di a + b è: %d\n", sum);
    printf("La differenza di a - b è: %d\n", dif);
    printf("Il prodotto di a * b è: %d\n", prod);
    printf("La divisione di a / b è: %d\n", div);

    return 0;
  
}