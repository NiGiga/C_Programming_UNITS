#include <stdio.h>

int fattoriale(int num);

// linea di comando
int main() {
    
    int n = 0, x = 0;
    float result;
    printf("Inserisci la variabile n\n");
    scanf("%d", &n);
    printf("Inserisci la variabile x\n");
    scanf("%d", &x);


    for(int i=0;i<=n; i++){

        result += ((x ^ n) / (fattoriale(n)));
        
    }
    
    
  

    printf("La sommatoria di x^k/k! con k che va da 0 a n, dove x = %d e n =%d "
         "e' = %f",
         x, n, result);

    return 0;
}

int fattoriale(int num) {

    if (num == 0 | num == 1)return 1;
    return num * fattoriale(num - 1);
}

/*float calculate(int num) {

    
    if (num == 0) return 1;
    else if (num ==1) return costante+1;
    
    float result = (costante ^ num) / fattoriale(num);
  
    return calculate(result);
}*/