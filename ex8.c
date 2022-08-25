/*Esercizio 9.8 (Iterazione indefinita). Si scriva un programma per calcolare
la media aritmetica di una serie di numeri x1 , . . ., xn inseriti da tastiera.
L’introduzione del valore 0 indica il termine del caricamento dei dati.
Esempio di output.
> Inserisci un numero (x_i): 10
> Inserisci un numero (x_i): 10
> Inserisci un numero (x_i): 5
> Inserisci un numero (x_i): 1
> Inserisci un numero (x_i): 15
> Inserisci un numero (x_i): 0
> La media dei numeri inseriti è = 8.2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){

    float number=0, sum=0, avg=0;
    int count=0;

    printf("Inserisci un numero (x_i):");
    scanf("%f", &number);

    while(number!=0){
        sum+=number;
        count+=1;
        printf("Inserisci un numero (x_i):");
        scanf("%f", &number);
    }

    if(count>=1){
        avg = sum/(float)count;
        printf("La media dei numeri inseriti è = %.2f\n", avg);
    }
    else printf("Non hai inserito dei numeri\n");

    printf("\n\n\n");
    system("pause");
    
    
    /*int x_i;
    int arr[];
    while(input == 0)
    printf("Inserisci un numero (x_i):");
    scanf("%d",x);
    save on arr;
    media = (x_i+...)/(len arr);
    printf("La media dei numeri inseriti è =");*/
    
}
