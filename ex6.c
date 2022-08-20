/*Esercizio 9.6. Si scriva un programma che legga due numeri da tastiera,
detti a e b, e determini le seguenti informazioni, stampandole a video:
• se b è un numero positivo o negativo;
• se a è un numero pari o dispari;
• il valore di a + b;
• quale scelta dei segni dell’espressione ±a + ±b porta al risultato massi-
mo, e quale è questo valore.*/

#include <stdio.h>

int main(){


    int a, b;
    

    printf("Inserire due valori (a, b): ");
    scanf("%d %d", &a, &b);

    //controllo se b è un numero positivo o negativo;
    if(b<0)
    {
        printf("Il valore %d (b) è negativo\n", b);
    }
    else
    {
        printf("Il valore %d (b) è positivo\n", b);
    }

    //controllo se a è un numero pari o dispari;
    if(a%2==0)
    {
        printf("Il valore %d (a) è un numero pari\n", a);
    }
    else
    {
        printf("Il valore %d (a) è un numero dispari\n", a);
    }

    //calcolo la somma a+b
    printf("La somma tra a+b è: %d + %d = %d\n", a, b, (a+b));

    // Trovo quale scelta dei segni dell’espressione ±a + ±b porta al risultato massimo,
    //e quale è questo valore.

    int x = a+b;
    int y = a-b;
    int z = -a+b;
    int w = -a-b;
    int arr[] = {x, y, z, w};

    int largest = arr[0];
        for (int i = 1; i < 4; ++i)
        {
            if (arr[i] > arr[0])
            {
                largest = arr[i];
            }
        }
        printf("%d\n", largest);

    



    return 0;
}