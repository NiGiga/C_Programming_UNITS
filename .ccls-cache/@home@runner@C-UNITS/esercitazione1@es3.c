/*Si scriva una funzione che prenda in input una stringa e ne calcoli la lunghezza in maniera
ricorsiva.*/

#include <stdio.h>
#include <string.h>
int len(char s[]);

int main ()
{ 
    printf(  "Scrivi una parola o un numero\n" );
    // dichiaro un char array per fare lo storage dell'input
    char inputsentence[126];
    scanf("%s", &inputsentence);

    
    /** punto il primo carattere con il puntatore **/
    char *p = inputsentence;

    /* itero fino ad ottenere "\0" termine della stringa*/
    while ( *p != '\0' ) {
           // stampo i caratteri e non la stringa
         
            printf ("%c \n", *p  ); 

            p++ ; // muovo p nella posizione succesiva
    }
    
    // conto i caratteri
    int len
        = printf("%s\n", inputsentence);
   
    printf("La lungezza e': \n");
   
    // stampo
    printf("%d\n", len - 1);


    return 0;
}


/* funzione conta caratteri
int len(char s[])
{
    int l = 0;
    //sfruttiamo il carattere di terminazione
    while(s[l]!='\0')
        l++;
    return l;
}*/


