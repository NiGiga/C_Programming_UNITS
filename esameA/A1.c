/*

Si scriva un programma C che calcola, per un dato n > 0 in input, il valore
sn=sommatoria di (2^n*i).... con i che va da 1 a n
Il calcolo della potenza e della sommatoria in sn deve utilizzare solamente funzioni ricorsive.
Esempio di calcolo: per n = 3 vale sn = 48, per n = 6 vale sn = 1344, etc.
Suggerimento. Dovendo le implementazioni essere ricorsive, non è ovviamente ammesso l’uso della funzione pow, e di soluzioni analitiche esplicite per il calcolo dei termini di sn.

*/

#include <stdio.h>
int potenza(int base, int esponente);
int somma(int n);
int sommatoria(int n);

int main()
{
    int n = 0;
    printf("Inserire valore di n>0\n");
    scanf("%d", &n);
    int s_n = sommatoria(n);
    printf("Per n = %d -> s_n = %d", n, s_n);
    
}

int potenza(int base, int esponente)
{
    if(esponente == 0)
        return 1;
    return base * potenza(base, esponente - 1);
}

int somma(int n)
{
    if(n == 0)
        return  0;
    return n + somma(n - 1);
}

int sommatoria(int n)
{
    return potenza(2, n) * somma(n);
}