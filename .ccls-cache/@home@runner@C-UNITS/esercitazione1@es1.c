#include <stdio.h>

int findRecursive(int num);



//linea di comando
int main()
{
    int number = 0;
    printf("Inserisci il numero del quale vuoi sapere il fattoriale\n");
    scanf("%d", &number);

    int recursive = findRecursive(number);
    printf("Il fattorale di %d e' %d\n", number, recursive);
    
    return 0;
}

int findRecursive(int num)
{
    
    if(num==0 | num==1) return 1;
    return num * findRecursive(num-1);
}