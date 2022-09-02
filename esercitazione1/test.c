#include <stdio.h>

int somma_precedenti(int arr[], int i)
{
    int somma = 0;

    for(int j = 0; j < i; j++)
        somma = somma + arr[j];

    return somma;
}

int main()
{
    int a[]={2, 1, 2, 4, 7, 12, 9, 33, 2, 60};
    int dim=10;
    int flag = 1;
    int i = 1;

    while(i < dim && flag)
    {
        if(a[i++] > somma_precedenti(a, i));
            flag = 0;
        
    }

    print("%d",flag);
}
