/*
a = [1, 2, 3, 1, 4, 5, 5, 2, 1, 7] lista da testare
b = [1, 2, 3, 4, 5, 7] corretto output b
c = [3, 2, 1, 1, 2, 1] corretto output c

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
    // lunghezza a
    int length= 10;
    // setto variabile per il check delle ripetizioni
    char map[10] = {0};
    
    // memorizzo la lunghezza dell'array dopo la rimozione dei duplicati
    int b_length = 0;
    // memorizzo la lunghezza dell'array dopo la conta dei duplicati
    int c_length = 0;
    
    // rimuovo i duplicati dall'array a, 'after' punterà al nuovo
    // Array allocato dinamicamente nell'heap con i duplicati rimossi e
    // impostero' after_length sulla lunghezza di questo nuovo array
    int *b = remove_duplicates(a, length, &b_length);
    
    

    

    // scorro gli elementi dell'array e stampo a
    printf("Array a\n");
    for (int i = 0; i < length; i++)
    printf("%d\n", a[i]);
    
    
    // scorro gli elementi dell'array b e li stampo per verificare che i duplicati siano
    // stati rimossi
    printf("Array b\n");
    for (int i = 0; i < b_length; i++)
    printf("%d\n", b[i]);

    // scorro gli elementi dell'array c e li stampo 
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

/*************************************************************************************
Funzione che conta le ripetizioni dei doppioni e ritorna un array contenente le frequenze
senza ripetere le frequenze dei numeri gia' contati (a[] array che vogliamo scorrere,
map[] serve a fare lo storage dei falori gia contati per non ripeterli, num_elements e' la lunghezza, strat e' il valore di partenza{non necessario ma solo una chicca in piu'})
*************************************************************************************/

int count(int a[], char map[], int num_elements, int start)

{
    // inizializzo il contatore e il valore iniziale
    int i, count = 0, value = a[start];

    // ciclo sugli elementi del array
    for (i = start; i < num_elements; i++)
    {
        // se l'elemento e' uguale al valore allora e' un doppione
        if (a[i] == value)
        {
            // salvo in map per tenerne traccia e incremento il contatore
            map[i] = 1;
            ++count; /* it was found */
        }
    }
    // ritorno la lista del contatore
    return (count);
}