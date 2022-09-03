/*

Si scriva una funzione che legge da tastiera un array a di 10 interi non negativi e alloca (staticamente o dinamicamente) altri due array: uno chiamato b i cui elementi sono il contenuto di a senza ripetizioni e l’altro chiamato c i cui elementi sono le frequenze dei valori in a memorizzati in b.
Ad esempio, se a = [1, 2, 3, 1, 4, 5, 5, 2, 1, 7] allora b = [1, 2, 3, 4, 5, 7] e 
c = [3, 2, 1, 1, 2, 1].

*/
/*******************************************************************************
*
* Program: Rimove duplicati array e conta le ripetizioni degli elementi
*
* Description: Programma per rimuovere gli elementi duplicati da un array in C.
* Questa soluzione prevede la creazione di un altro array allocato dinamicamente sul file
* heap che contiene gli stessi elementi dell'array originale con i duplicati
* rimossi e conta quante volte ogni elemengto si ripete.
*
*
* Nicola Gigante AIDA 2022
*
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *remove_duplicates(int array[], int length, int *new_length);
int count(int a[], char map[], int num_elements, int start);


int main()
{
    // a array che contiene duplicati
    int a[] = {1, 2, 3, 1, 4, 5, 5, 2, 1, 7};
    int length= 10;
    char map[10] = {0};
    
    // memorizzero' la lunghezza dell'array dopo la rimozione dei duplicati
    int b_length = 0;
    int c_length = 0;
    
    // rimuovo i duplicati dall'array a, 'after' punterà al nuovo
    // Array allocato dinamicamente nell'heap con i duplicati rimossi e
    // impostero' after_length sulla lunghezza di questo nuovo array
    int *b = remove_duplicates(a, length, &b_length);
    
    

    

    // stampo a
    printf("Array a\n");
    for (int i = 0; i < length; i++)
    printf("%d\n", a[i]);
    
    
    // scorro gli elementi dell'array b e li stampo per verificare che i duplicati siano
    // stati rimossi
    printf("Array b\n");
    for (int i = 0; i < b_length; i++)
    printf("%d\n", b[i]);

    // stampo c
    printf("Array c\n");
    for (int i = 0; i < length; i++)
    {
        if (map[i] == 0) {
            int c = count(a, map, 20, i);
            printf("%d\n",c);
        }
    }
    
    
    // free sulla memoria dinamica dell'array
    free(b);
    
    
    return 0;
}


/**************************************************************************************
Funnzione che restituisce un puntatore a un array allocato dinamicamente nell'heap che contiene gli elementi dell'array con lunghezza con duplicati rimossi, dove usiamo pass by pointer (cioè pass by riferimento) per restituire la lunghezza di questo array allocato dinamicamente tramite nuova_lunghezza.
****************************************************************************************/

int *remove_duplicates(int a[], int length, int *new_length)
{
    // Assegno la quantità massima di spazio richiesta per b, assumo che OGNI elemento
    // nell'array possa essere unico e quindi alloco spazio per un array della stessa 
    // lunghezza. Usero' realloc() per "ridimensionare" questo nuovo_array in un secondo
    // momento, se necessario. 
    int *b = malloc(length * sizeof(int));
    

    
    // inizializzo unique_count per tenere traccia dei numeri non duplicati
    int unique_count = 0;
    
    // usero' un for loop per controllare ogni elemento dell'array a
    for (int i = 0; i < length; i++)
    {
    // questo ciclo interno verificherà se l'elemento all'indice i nell'
    // array originale si trova in b, impostando is_unique su false
    // se questo è il caso
        bool is_unique = true;
        for (int j = 0; j < unique_count; j++){
              if (b[j] == a[i])
              {
                is_unique = false;
                
                break;
              }
        }
        
        
        // Se l'elemento all'indice i in a NON si trova in b, questa deve essere la prima
        // occorrenza di questo valore. Allora lo aggiungo a b e incremento count. 
        // Se l'elemento È trovato in b, non lo faccio, cosi' da filtrare i valori 
        // duplicati
        if (is_unique)
        {
          b[unique_count] = a[i];
          unique_count++;
        }
    }

    
    
    // Se il conteggio degli elementi univoci corrisponde alla lunghezza originale di a/
    // a non contiene elementi duplicati e non è necessario ridimensionare b. 
    // Se la lunghezza di a e' > di quella di b devono essercene stati alcuni
    // duplicati. Quindi usiamo realloc() su unique_count per riallocare lo spazio
    // per l'array.
    if (unique_count != length)
    b = realloc(b, unique_count * sizeof(int));
    
    // dereferenziamo la variabile al puntatore new_length 
    *new_length = unique_count;
    
    // ritorniamo il pointer all'array b.
    return b;
}



int count(int a[], char map[], int num_elements, int start)
/* checks array a for number of occurrances of value */
{
    int i, count = 0, value = a[start];

    for (i = start; i < num_elements; i++)
    {
        if (a[i] == value)
        {
            map[i] = 1;
            ++count; /* it was found */
        }
    }
    return (count);
}