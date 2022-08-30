/*

Funzione che prende in input una stringa e restituisce 1 se la stringa è palin-
droma, 0 altrimenti.

*/


#include <stdio.h>
#include <string.h>

int main()
{
    // inizializzo la stringa. Pongo flag falso.
    char string1[34];
    int i, length;
    int flag = 0;

    // user imput
    printf("Inserisci la parola\n");
    scanf("%s", string1);

    // conto la lunghezza con una funz bild-in, potrei creare un ciclo while che
    // itera sugli elementi ed a ogni ciclo aumenta il conta
    length = strlen(string1);

    // creo un ciclo for per comparare gli elementi
    for(i=0;i < length ;i++)
    {
        // if statament che compara la stringa originale e 
        // la stringa con i valori a specchio
        if(string1[i] != string1[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag) printf("%s non e' palindroma\n", string1);

    else printf("%s e' palindroma\n", string1);
    
    return 0;
}