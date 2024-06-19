#include <stdio.h>

// kommentti 
int main(void){
    
    // muuttujat
    int kokonaislukuYksi;
    int kokonaislukuKaksi;

    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &kokonaislukuYksi);

    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &kokonaislukuKaksi);
  
    /*
        1. Lisää ensimmäiseen lukuun yksi. Vähennä toinen luku ensimmäisestä ja tulosta tulos.
        2. Kerro alkuperäiset luvut keskenään ja vähennä tuloksesta viisi. Tulosta tulos.
        3. Vähennä toisesta luvusta yksi. Tulosta sitten lukujen jakojäännös.
   */

    int lisattyYksi = kokonaislukuYksi + 1;
    int erotus = lisattyYksi - kokonaislukuKaksi;
    printf("%d - %d = %d\n", lisattyYksi, kokonaislukuKaksi, erotus);


    int tulo = kokonaislukuYksi * kokonaislukuKaksi;
    int vahennettyViisi = tulo - 5;
    printf("(%d * %d) - 5 = %d\n", kokonaislukuYksi, kokonaislukuKaksi, vahennettyViisi);

    int vahennettyYksi = kokonaislukuKaksi - 1;
    int jakojaannos = kokonaislukuYksi % vahennettyYksi;
    printf("%d %% %d = %d", kokonaislukuYksi, vahennettyYksi, jakojaannos);


    return(0);

}