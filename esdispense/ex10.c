/*Esercizio 10.1 (Minimo). Si scriva una funzione che riceva in ingresso tre
numeri interi x, y e z e ne restituisca il minimo. Si crei una funzione di test
che prenda in input due dei tre numeri dall’utente, x ed y, e testi la tripletta
(x, y, w) con w ∈ [1, max{x, y}].
Nota: per testare la tripletta si intende testare ogni possibile tripla di valori
ottenuta fissando x ed y, e variando w.
Esempio di output.
> Inserisci il numero (x): 1
> Inserisci un numero (y): 3
> Inserisci un numero (z): 4
> tripletta (1, 2, 1) - minimo -> 1
> tripletta (1, 2, 2) - minimo -> 1
> tripletta (1, 2, 3) - minimo -> 1*/

#include <stdio.h>
#include <stdlib.h>
void main(){

    int x=0, y=0, z=0, min=0;

    printf("Inserisci un numero (x):");
    scanf("%d", &x);
    printf("Inserisci un numero (y):");
    scanf("%d", &y);
    printf("Inserisci un numero (x):");
    scanf("%d", &z);

    if(x<y){
        
        if(y<z){
            min = x;
            printf("Tripletta (%d, %d, %d) - minimo -> %d\n",x,y,z,min);
        }
        
        else{
        
            if(x<z) min = x;
                
            else min = z;
            
            printf("Tripletta (%d, %d, %d) - minimo -> %d\n",x,y,z,min);
        }
    }
    else{
        
        if(y<z) min = y;
            
        else min = z;
        
        printf("Tripletta (%d, %d, %d) - minimo -> %d\n",x,y,z,min);
    }
    
}