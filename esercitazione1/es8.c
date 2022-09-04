/*******************************************************************************
*
* Programma: Si scriva una funzione ricorsiva che calcola il valore n-esimo (dove n è un
* parametro passato in input) della seguente successione:
*
*           3    n =0
       an =
            2 · an−1+ 2n   n> 0
*
* Opzionale: implementare una funzione ricorsiva anche per il calcolo di 2n (o più in
* generale una funzione che, dati una base ed un esponente calcola tale potenza, con
* segnatura int potenza(int base, int esponente)).
*
* Con semplici calcoli è possibile mostrare che la stessa successione può esser riscritta
* come:
*
* an = 3 · 2n + n · 2n
*
* Si scriva un’altra funzione, questa volta iterativa, che calcola la successione cosı̀
* definita e verifichi che il termine n-esimo sia identico a quello calcolato
* ricorsivamente.
*
* Nicola Gigante AIDA 2022
*
*******************************************************************************/





#include <stdio.h>

// funzione per richiamare il valore come esponente
int esponente(int a, int b)
{
    if(b == 0)
        return 1;
    return a * esponente(a, b - 1);
}

// funzione ricorsiva per calcolare la succesione 
int succesione_ric(int n)
{
    // se n = 0 allora torna 3 altrimenti risolvi l'equazione
    if(n == 0)
        return 3;
    return 2 * succesione_ric(n - 1) + esponente(2, n);
}

// funzione iterativa per calcolare la succesione 
int successione_ite(int n)
{
    // pongo n=3 per iniziare la succesione da 0
    int a_n = 3;

    // for loop  per iterare su ogni elemento della succesione da 0 a n
    for(int i = 1; i <= n; i++)
    {
        a_n = 2 * a_n + esponente(2, i); 
    }

    return a_n;
}

// funzione iterativa per calcolare la succesione 
int successione_ite2(int n)
{
    // pongo n=3 per iniziare la succesione da 0
    int a_n = 3;
    // variabile di supporto per il cambio di valore
    int a_n1;

    // for loop  per iterare su ogni elemento della succesione
    for(int i = 0; i < n; i++)
    {
        // se n = 0 ritorna 3
        if(n == 0)
            return a_n;

        // altrimenti calcola la succesione e sostituisce a_n con a_n1
        else
        {
            a_n1 = 2 * a_n + esponente(2, i);
            a_n = a_n1;
        }
    }

    return a_n;
}

// funzione iterativa che dimostra che il risultato della succesione an = 3 · 2n + n · 2n
// equivale al risultato della funzione precedente
int succesione_alebrica(int n)
{
    return 3 * esponente(2, n) + n * esponente(2, n);
}

int main()
{
    // richiesta di input
    printf("Insereisi il valore di n\n");
    int n =0;
    scanf("%d", &n);

    // for loop per il printf della succesione
    for(int i = 0; i <= n; i++)
    {
        // variabile di supporto per la succesione ricorsiva che cicla sull'indice
        int ric = succesione_ric(i);
        printf("ric: %d\n", ric);

        // variabile di supporto per la succesione algebrica che cicla sull'indice
        int alg = succesione_alebrica(i);
        printf("alg: %d\n", alg);

        // variabile di supporto per la succesione iterativa che cicla sull'indice
        int ite = successione_ite(i);
        printf("ite: %d\n", ite);

        // int ite2 = successione_ite2(i);
        // printf("ite2: %d\n", ite2 );
    }
    
    
    return 0;
}