#include <stdio.h>

int main(){


    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    if( a>b )
    {
    c = a;
    a = b;
    b = c;
    }
    printf("%d\n", b) ;
    return 0;

}