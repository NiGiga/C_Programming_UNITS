/*
PRODUTTORIA
*/

#include <stdio.h>
#include <stdlib.h>
int prod(int a[], int dim);

int main()
{
    int n;
    printf("inserire dimensione array\n");
    scanf("%d",&n);

    int a[n];
    printf("Inserire valori array\n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    
    
    
    int s_n = prod(a,n);
    printf("Per a = ");
    printf("[ ");
    for(int i=0; i<n; i++){
        
        printf(" %d ", a[i]);
    }
    printf(" ]");
    printf("-> s_n = %d\n",s_n);
    
    
}


int prod(int a[], int dim)
{
    if(dim == 1)
        return 1;
    return (a[dim - 1] + a[dim - 2]) * prod(a, dim - 1);
}