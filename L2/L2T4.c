#include <stdio.h>


int main(void){
    int valinta = 0;
    int luku1 = 0; 
    int luku2 = 0;

    printf("Anna kokonaisluku: ");
    scanf("%d", &luku1);


    do {
        printf("\nValitse haluamasi toiminto:\n1) Kerro luku\n2) Jaa luku\n0) Lopeta\nValintasi: ");
        scanf("%d", &valinta);
        
        if(valinta == 1){
            printf("\nAnna kokonaisluku, jolla luku kerrotaan: ");
            scanf("%d", &luku2);
            luku1 *= luku2;
            printf("Luku on nyt %d.\n",luku1);
        } else if(valinta == 2) {
            printf("\nAnna kokonaisluku, jolla luku jaetaan: ");
            scanf("%d", &luku2);
            if(luku2 != 0){
                luku1 /= luku2;
                printf("Luku on nyt %d.\n",luku1);
            } else{
                printf("Nollalla ei voi jakaa!\n");
            }
        }else if(valinta == 0){
            printf("\nLopetetaan.\n");
        }else{
            printf("Tuntematon valinta.\n");
        }} while(valinta != 0);


    printf("\nKiitos ohjelman käytöstä.");

    return(0);
}