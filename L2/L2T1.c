#include <stdio.h> 
 

int main(void) { 

char user_input;

printf("Anna kirjain: ");
scanf("%c", &user_input);


if(user_input >= 65 && user_input <= 90){
    printf("'%c' on iso kirjain.", user_input);
} else{
    if(user_input >= 97 && user_input <= 122){
        printf("'%c' on pieni kirjain.", user_input);
    } else{
        printf("'%c' ei ole ASCII-taulukon mukainen kirjain.", user_input);
    }
}


return(0); 
}