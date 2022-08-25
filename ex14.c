/*Esercizio 10.4 (Uguaglianza approssimata). Si scriva una funzione che riceva
in ingresso due numeri double x ed y e restituisca 1 se e solo se i due numeri
sono uguali a meno di un fattore ε = 10−9 , ovvero
|x − y| < ε
e 0 in caso contrario. Il valore di ε deve essere un parametro della funzione.
> Inserisci epsilon (e): 0.000001
> Inserisci il numero (x): 0.001
> Inserisci un numero (y): 1.001
> i due numeri sono diversi con epsilon 0.000001*/

#include <stdio.h>
#include <math.h>

void main(){

    float e, x, y;
    printf("Inserisci epsilon (e):\n");
    scanf("%f", &e);
    printf("Inserisci il numero(x):\n");
    scanf("%f", &x);
    printf("Inserisci un numero (y):\n");
    scanf("%f", &y);

    if(fabs(x-y)<e){
        return 0;
    }
    
    else{
        if(x==y) printf("i due numeri sono uguali con epsilon %f", e);
        else printf("i due numeri sono diversi con epsilon %f", e);
    }
}