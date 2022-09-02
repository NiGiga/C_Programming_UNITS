/*

Si scriva una funzione che prende in input un array di 10 interi e verifica se ogni valore
presente nell’array è minore della somma dei numeri presenti
 nelle celle che lo precedono.
Ovvero la funzione verifica la proprietà ∀i ∈ [1, dim).a[i] < Pi−1
 a[j].
j=0La segnatura di tale funzione è int minore somma(int a[], int dim) e ritorna 1 se la
proprietà è soddisfatta, 0 altrimenti.
Tale proprietà vale ad esempio nell’array a = [2, 1, 2, 4, 7, 12, 9, 33, 2, 60] e non vale nell’array
b = [4, 2, 5, 3, 16, 32, 2, 12, 34, 21].

*/

#include <stdio.h>

int minore_somma(int a[], int dim)
{
    int flag = 1;
    int i = 1;

    int somma = 0;

    for(int j = 0; j < dim; j++){
        
        while(i < dim && flag)
        {
            if(a[j] > (somma))flag = 0;
        }

        somma = somma + a[j];

        

        
    }
 
    return flag;
}


int main()
{
    int a[]= {2, 1, 2, 4, 7, 12, 9, 33, 2, 60};
    int dim = 10;

    printf("%d\n", minore_somma(a,dim));

}