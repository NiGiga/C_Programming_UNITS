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

/*

AMBIENTE/MEMORIA NEL CORSO DEL PROGRAMMA

//P1

j|l6
a|l5
a|l4
a|l3
a|l2
a|l1
i|l0
-----
l6|i+1=4
l5|/
l4|/
l3|/
l2|/
l1|/
l0|3

//P2

j|l6
a|l5
a|l4
a|l3
a|l2
a|l1
i|l0
-----
l6|3
l5|/
l4|/
l3|2
l2|1
l1|0
l0|2

//P2

j|l6
a|l5
a|l4
a|l3
a|l2
a|l1
i|l0
-----
l6|0
l5|/
l4|3
l3|2
l2|1
l1|0
l0|3
*/