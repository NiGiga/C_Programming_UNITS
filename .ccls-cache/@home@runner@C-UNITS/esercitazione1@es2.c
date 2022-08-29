#include <stdio.h>

int conta(int a[], int len);
int nValoriMinori(int a[],int n);

// linea di comando
int main()
{
    int a[7] = {1, 2, 1, 3, 6, 4, 14};
    printf("Il numero di elementi dove il valore è pari al numero di elementi con valore inferiore considerando solo quelli in posizione precedente e'\n - %d -\n", conta(a,7));
}

// funzione per trovare i valori minori 
//TODO: compattare in un unica funzione con for loop annidati
int nValoriMinori(int a[], int n)
{
    int  count=0;
    
    for(int i=0; i<n; i++)
        {
            if (a[i]<a[n]) count++;
        }
    return count;
}

// funzione per contare i valori minori
int conta(int a[], int len)
{
    int count=0;
    for(int i=1; i<len; i++)
        {
            if(a[i]==nValoriMinori(a,i)) count++;
        }
    return count;
}