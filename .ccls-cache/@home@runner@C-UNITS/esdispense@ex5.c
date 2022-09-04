/*Esercizio 9.5. Si realizzi un programma che acquisisca da tastiera un nu-
mero x e stampi un messaggio che indichi se tale numero sia positivo oppure
negativo, e ne stampi il valore assoluto |x|. Si richiede di risolvere l’esercizio
senza alcuna variabile di appoggio.
Esempio di output.
> Inserisci il numero (x): -16
> Il numero 16 è negativo
> Il valore assoluto di -16 è |-16| = 16*/

#include <stdio.h>

int main(){

    int x;

    printf("Inserisci il numero (x): ");
    scanf("%d", &x);

    if(x<0)
    {
        printf("Il numero %d è negativo\n", x);
    }
    else
    {
        printf("Il numero %d è positivo\n", x);
    }

    printf("Il valore assoluto di %d è |%d| = %d", x, x, x *(-1));



    return 0;
}
