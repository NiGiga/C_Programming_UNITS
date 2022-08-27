#include <stdio.h>

int fattoriale(int num);
int succesione(int n);
int n = 0, x = 0;

// linea di comando
int main() {
    
    printf("Inserisci la variabile n\n");
    scanf("%d", &n);
    printf("Inserisci la variabile x\n");
    scanf("%d", &x);


    int succesion = succesione(n);

    printf("La sommatoria di x^k/k! con k che va da 0 a n, dove x = %d e n =%d "
         "e' = %d",
         x, n, succesion);

    return 0;
}

int fattoriale(int num) {

    if (num == 0 | num == 1)return 1;
    return num * fattoriale(num - 1);
}


int succesione(int n)
{
    int s_n_1 = 1;
    for(int i=1; i<=n; i++){
        int s_n = (x^n)/fattoriale(n);
        s_n_1 = s_n;
    }
    return s_n_1;
}

