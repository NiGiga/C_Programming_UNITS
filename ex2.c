/*Si scriva un programma che legga un valore intero e visualizzi
il valore intero precedente e il successivo.
Esempio di output.
> Inserisci il numero: 5
> Il successivo di 5 è: 6
> Il precedente di 5 è: 4*/


#include <stdio.h>

int main() {

    int num, prec, succ;

    printf("Inserisci il numero: ");
    scanf("%d", &num);

    prec = num - 1;
    succ = num +1;

    printf("Il successivo di %d è: %d\n", num, prec);
    printf("Il precedente di %d è: %d", num, succ);
    

    return 0;
  
}