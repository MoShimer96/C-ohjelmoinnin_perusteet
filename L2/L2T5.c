#include <stdio.h>
#define MAX 99

int main(void){
    int jakaja = 0;
    int first = 1; // Flag 
    printf("Anna jakaja: ");
    scanf("%d", &jakaja);

    if(jakaja > 99){
        printf("Luku on suurempi kuin ohjelman testaama lukuväli.");
    } else{
        printf("Seuraavat luvut alle sadan ovat jaollisia luvulla %d:\n", jakaja);
        for(int i = 1; i <= MAX; i++){
            if(i % jakaja == 0){
                if (!first) {
                printf(", ");
            }
                printf("%d", i);
                first = 0; 
            }
            } 
    }
}

