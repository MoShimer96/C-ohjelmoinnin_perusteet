#include <stdio.h>
#include <string.h>
#define MIN 3
#define MAX 10


int main(void){
    int user_input;
    char output[user_input];
    printf("Anna kokonaisluku väliltä 3 - 10: ");
   
    scanf("%d", &user_input);
    

    if(user_input < MIN || user_input > MAX){
        printf("\nAntamasi luku ei ole määritellyllä välillä.");

    } else{
        printf("\n");
        // Ensimmäinen silmukka
        for(int i = 0; i < user_input; i++){
            for(int j = 0; j <= i; j++){
                printf("*");
            } if(i != user_input - 1){
                printf("\n");
            }
        }

        // Toinen silmukka
        for(int k = user_input; k > 0; k--){
            if(k != 1){
                printf("\n");
            }
            for(int l = k-1; l >0; l--){
                printf("*");
            } 
        }



    }


}