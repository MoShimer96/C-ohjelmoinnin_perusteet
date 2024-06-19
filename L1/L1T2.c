#include <stdio.h>

int main(void){
    // muuttujat
    float liukuluku;
    int kokonaisluku;

    printf("Anna liukuluku: ");
    scanf("%f", &liukuluku);

    printf("Anna kokonaisluku: ");
    scanf("%d", &kokonaisluku);

    printf("Annoit luvut %1.2f ja %d.", liukuluku, kokonaisluku);

    return(0);
}