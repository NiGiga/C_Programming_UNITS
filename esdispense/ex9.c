/*Esercizio 9.9 (Iterazione indefinita con min-max). Si scriva un programma
per calcolare il valore massimo e minimo di un insieme di n numeri inseriti
da tastiera. Il programma deve prima leggere il valore di n dall’utente, ed in
seguito leggere una sequenza di n > 0 numeri. A questo punto il programma
deve stampare il massimo ed il minimo tra i numeri inseriti.
Esempio di output.
> Inserisci il numero (n): 4
> Inserisci il numero (1): 1
> Inserisci un numero (2): 11
> Inserisci un numero (3): 1
> Inserisci un numero (4): -4
> Il numero massimo inserito è = 11
> Il numero minimo inserito è = -4*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){

    int count=0, number=0, max=0, min=0;

    printf("Inserisci un numero (x_i):");
    scanf("%d", &number);
    count+=1;
    max= number;
    min= number;

    while(number!=0){
        printf("Inserisci un numero (x_i):");
        scanf("%d", &number);

        if(number>max) max=number;
        if(number<min) min=number;
    }

    if(count>=1){
        printf("Il numero massimo inserito è = %d\n", max);
        printf("Il numero minimo inserito è = %d\n", min);
    }
    else printf("Non hai inserito dei numeri\n");
}