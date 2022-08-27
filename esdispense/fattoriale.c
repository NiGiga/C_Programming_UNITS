
//scrivere il programma per calcolareil fattoriale di un numero da user imput in maniera ricorsiva 
// e in maniera iteratva

#include <stdio.h>

int findRecursive(int num);
int findIterative(int num);

//linea di coando

int main()
{
    int number = 0;
    printf("Inserisci il numero del quale vuoi sapere il fattoriale\n");
    scanf("%d", &number);
    
    int iterative = findIterative(number);
    printf("Il fattorale (con iterazione) di %d e' %d\n", number, iterative);

    int recursive = findRecursive(number);
    printf("Il fattorale (con ricorsivita') di %d e' %d\n", number, recursive);

    if(recursive == iterative) printf("Tutte le strade portano a Roma\n");
    
    return 0;
}

int findIterative(int num)
{
    int factorial = 1;
    

    for(int i=1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int findRecursive(int num)
{
    if(num==0 | num==1) return 1;
    return num * findRecursive(num-1);
}