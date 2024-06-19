/*  Tee C-ohjelma, joka kysyy käyttäjältä erilaisia tietoja ja tulostaa ne näytölle alla olevan esimerkin
 mukaisesti. Kiinnitä huomiota tietojen tallettamiseen käytettäviin muuttujiin ja niiden määrittelyyn
 sekä tulosta liukuluku 1 desimaalin tarkkuudella. Määritä merkkitaulukon kooksi 30 merkkiä. */


/* 
Esimerkkiajo 1

Syötteet:
 ACME
 Rakettireppu
 4
 164.34

Tuloste:
 Anna valmistaja: ACME
 Anna malli: Rakettireppu
 Anna kappalemäärä: 4
 Anna paino: 164.34
 Laitteen valmistaja ja malli on ACME Rakettireppu.
 Laitetta on varastossa 4 kappaletta ja laitteen paino on 164.3 kg. */

#include <stdio.h>
#include <string.h>

int main(void){
    // muuttujat
    char valmistaja[32];
    char malli[32];
    int kpl;
    float paino;

    printf("Anna valmistaja: ");
    fgets(valmistaja, 32, stdin);
    valmistaja[strlen(valmistaja)-1] = '\0';

    printf("Anna malli: ");
    fgets(malli, 32, stdin);
    malli[strlen(malli)-1] = '\0';

    printf("Anna kappalemäärä: ");
    scanf("%d", &kpl);

    printf("Anna paino: ");
    scanf("%f", &paino);

    printf("Laitteen valmistaja ja malli on %s %s.\n", valmistaja, malli);
    printf("Laitetta on varastossa %d kappaletta ja laitteen paino on %3.1f kg.", kpl, paino);

    return(0);

 
}