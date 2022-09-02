

/*******************************************************************************
*
* Programma: Merge sorted arrays
* 
* Description: Fare il merge di 2 array ordinatti in uno in maniera crescente.
*
* Nicola Gigante AIDA 2022
*
*******************************************************************************/

#include <stdio.h>

void merge(int a[], int dima, int b[], int dimb, int c[]);

int main(void) 
{
  // a e b sono gli array ordinati e memorizzeremo il risultato unito in c
  int a[] = {2, 4, 26, 75, 88};
  int b[] = {3, 4, 23, 54, 77};
  int c[10];
  
  // merge arrays
  merge(a, 5, b, 5, c);

  // ciclo per il risultato
  for (int i = 0; i < 10; i++)
    printf("r[%d] = %d\n", i, c[i]);

  return 0;
}

// unisce gli array ordinati a e b di lunghezza dima e dimb nell'array di risultati c
void merge(int a[], int dima, int b[], int dimb, int c[])
{
  // usiamo i per scorrere gli elementi di a, j per scorrere gli elementi
  // di b, e k per impostare gli elementi di c
  int i = 0, j = 0, k = 0;
  
  // alla fine raggiungeremo la fine di uno degli array
  while (i < dima && j < dimb)
  {
    /*
    i e j tengono traccia di quale elemento stiamo guardando 'successivo' in a e 
    b,e quindi controlliamo se l'elemento successivo in a è minore del successivo
    elemento in b, e se lo è impostiamo quello come elemento successivo di c e
    incrementa i contatori rilevanti
    */
      
    if (a[i] < b[j])
    {
      c[k] = a[i];
      k++;
      i++;
    }
    // altrimenti, impostiamo l'elemento successivo di b come elemento successivo 
    // in c e incrementiamo i contatori rilevanti
    else 
    {
      c[k] = b[j];
      k++;
      j++;
    }
  }
  
  // uno dei due array avrà almeno un elemento rimanente
  // memorizzato in c... se i < m significa che a ha elementi rimanenti e 
  // memorizziamo quelli in r
  while (i < dima)
  {
    c[k] = a[i];
    k++;
    i++;
  }

  // se j < n significa che b ha elementi rimanenti e li memorizziamo in r
  while (j < dimb)
  {
    c[k] = b[i];
    k++;
    j++;
  }

}