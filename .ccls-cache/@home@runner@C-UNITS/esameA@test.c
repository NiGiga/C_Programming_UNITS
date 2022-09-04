#include <stdio.h>

int main(void) {
    int i = 3;
    int a[5];
    int j = i + 1; // P1
    for(int i = 0; i < 4; i++)
    {
        a[i] = i;
        j = i + 1; //P2 (terza iterazione)
        printf("%d\n",a[i]);
    }
    j = i - j + 1; // P3
    printf("I=%d\n",i);
    printf("J=%d\n",j);
    
}