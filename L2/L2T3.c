#include <stdio.h>
#include <string.h>

int main(void){
    char cMerkki;
    char merkkijono[30];
    int merkkienSumma = 0;
    char *ptr;
    printf("Anna merkki: ");
    scanf("%c", &cMerkki);
    printf("Merkki '%c' on ASCII-taulukon mukaan lukuna %d.\n", cMerkki, cMerkki);


    
    printf("Anna merkkijono: ");
    scanf("%s", &merkkijono);
    ptr = merkkijono;

    while(*ptr != '\0'){
        merkkienSumma += *ptr;
        ptr++;
    }
    
    printf("Merkkijonon '%s' merkkien summa on %d.", merkkijono, merkkienSumma);
     

}