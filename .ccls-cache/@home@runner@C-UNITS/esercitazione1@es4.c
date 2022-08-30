/*
#########PSEUDOCODE#########

funz()

    if(prima lettera == ultima lettera)
        if(seconda == penultima)
                e via dicendo
                return 1
    else return 0

*/
#include <stdio.h>
#include <string.h>

int main(){
    char string1[34];
    int i, length;
    int flag = 0;
    
    printf("Inserisci la parola");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%s non e' palindroma", string1);
    }    
    else {
        printf("%s e' palindroma", string1);
    }
    return 0;
}