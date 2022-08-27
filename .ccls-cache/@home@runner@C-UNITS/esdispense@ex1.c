/* Si scriva un programma che legga due valori interi, calcoli la
loro somma e media aritmetica, e le stampi a schermo.
Esempio di output.
> Inserisci il primo numero: 16
> Inserisci il secondo numero: 4
> La somma totale è: 20
> La media aritmetica è: 10 */


#include <stdio.h>

int main() {

    int firstNum, secNum, sum, avg;
    

    printf("Inserisci il primo numero:");
    scanf("%d", &firstNum);

    printf("Inserisci il secondo numero:");
    scanf("%d", &secNum);

    sum = firstNum + secNum;
    
    avg = sum/2;

    printf("La somma totale è: %d\n", sum);
    printf("La media aritmetica è: %d", avg);

    return 0;
  
}