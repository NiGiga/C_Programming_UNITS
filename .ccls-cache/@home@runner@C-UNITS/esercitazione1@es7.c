/*******************************************************************************
*
* Programma: Controllare se un numero in una lista e' minore della somma dei precedenti.
* 
* int a[]={2, 1, 2, 4, 7, 12, 9, 33, 2, 60};// lista che soddisfa la conizione
* int b[]= {4, 2, 5, 3, 16, 32, 2, 12, 34, 21};// lista che non soddisfa la conizione
*
* Nicola Gigante AIDA 2022
*
*******************************************************************************/
#include <stdio.h>

int somma_precedenti(int arr[], int i)
{
    int somma = 0;

    for(int j = 0; j < i; j++)
        somma = somma + arr[j];

    return somma;
}

// controllo se il numero è maggiore della somma dei precedenti
int minore_somma(int a[], int dim)
{
    int flag = 1;
    int i = 1;

    while(i < dim && flag)
    {
        if(a[i] > somma_precedenti(a, i))
            flag = 0;
            i++;
    }

    if (flag)return 1;
    else return 0;
}

int main()
{
    int a[]={2, 1, 2, 4, 7, 12, 9, 33, 2, 60};// lista che soddisfa la conizione
    int b[]= {4, 2, 5, 3, 16, 32, 2, 12, 34, 21};// lista che non soddisfa la conizione
    int dim = 10;


    printf("%d\n",minore_somma(b,dim));
    
    return 0;
}