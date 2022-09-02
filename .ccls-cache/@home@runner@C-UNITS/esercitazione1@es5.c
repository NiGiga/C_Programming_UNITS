/*

Si scriva una funzione che legge da tastiera un array a di 10 interi non negativi e alloca (staticamente o dinamicamente) altri due array: uno chiamato b i cui elementi sono il contenuto di a senza ripetizioni e l’altro chiamato c i cui elementi sono le frequenze dei valori in a memorizzati in b.
Ad esempio, se a = [1, 2, 3, 1, 4, 5, 5, 2, 1, 7] allora b = [1, 2, 3, 4, 5, 7] e 
c = [3, 2, 1, 1, 2, 1].

*/

#include <stdio.h>
#include <stdlib.h>

void creare_array(int arr[], int dim)
{
    for(int i = 0; i < dim; i++)
    {
        printf("%d: ", i);
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int dim)
{
    for(int i = 0; i < dim; i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }
}

int singolare(int arr[], int dim, int j)
{
    //resituisce vero se è unico
    //falso se ne esiste una copia prima di lui

    int unico = 1;
    int i = 0;
    while(unico && i < dim)
    {
        if(arr[i] == arr[j])
            unico = 0;
        i++;
    }

    return unico;
}

int trova_elemento(int arr[], int dim, int x)
{
    //può essere un ciclo while

    int flag = x;

    for(int i = 0; i < dim; i++)
    {
        if(arr[i] == x)
            flag = -1;
    }

    return flag;
}

int* ripetizioni(int arr[], int dim, int* c)
{
    int* b = malloc(sizeof(int) * dim);
    c = malloc(sizeof(int) * dim);

    for(int i = 0; i < dim; i++)
    {
        if(trova_elemento(arr, dim, arr[i]) != -1)
            *(b + i) = arr[i];
    }



    return b;
}

int main()
{
    int a[10];
    int dimensione = 10;
    int* b;
    int* c;

    creare_array(a, dimensione);
    printf("array a\n");
    print_array(a, dimensione);

    b = ripetizioni(a, 10, c);
    printf("array b\n");
    print_array(b, 10);
    //printf("array c\n");
    //print_array(c, 10);


    return 0;
}