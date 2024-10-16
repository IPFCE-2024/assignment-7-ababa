#include <stdio.h>
#include "string.h"
#include <string.h>

void initialize_string(string *s) {
    s->p = s->str;  
}

/* Indlæser en string */
void scanString(string *s, int size) {
    fgets(s->p, size, stdin); // Indlæser string


    // Fjerner den ekstra tilføjede \n og erstatter den med \0
    for (char *sp = s->p; *sp != '\0'; sp++) {
        if (*sp == '\n') { 
            *sp = '\0';    
            break;            
        }
}
}

/* Udregner længden den indlæste string */
int stringLength(string *s){

    int length = 0;
    char *lp = s->p; // Ny pointer der peger på index 0 af str[]

    /* Tæller op fra index 0 til NULL-terminator */
   while(*lp != '\0') {
        lp++;
        length++;
    }
    return length;
}

/* Tjekker hvilke index der forekommer et 'o'/'O' */
void count_index_of_o(string *s){
    int index = 0;

    for(char *ip = s->p; *ip != '\0';ip++){ // Tæller op fra index 0 til NULL-terminator
        if(*ip == 'o' || *ip == 'O'){ // Hvis der forekommer et 'o'/'O', print index-nr
        printf("There is an occurence of o at index %d\n", index);
        }
        index++;
    }
}

/* Tæller antaller af 'o'/'O' */
int count_num_of_o(string *s){
    int sum = 0;
    char *np = s->p; // Ny pointer der peger på index 0 af str[]

    while(*np != '\0') { //Tæller op fra index 0 til NULL-terminator
        if(*np == 'o' || *np == 'O'){ // Beregner summen
            sum++;
        }
        np++;
    }
    return sum;
}

/* Indlæser en sub_string ud fra string i et bruger defineret interval */
char* sub_string(string *s, int x, int y){
    int start_index = (x > y) ? y : x; // Indlæser den mindste værdi som start_index
    int end_index = (x > y) ? x : y; // Indlæser den største værdi som end_index

    static char subString[100]; // Definerer den nye subString
   
   /* Indlæser værdierne fra string til subString i intervallet [start_index;end_index] */
    for(int i = start_index; i < end_index; ++i){
        subString[i - start_index] = s->p[i];
    }
    return subString;
}




// STRING TOKENISATION
void string_token(string *s){
    int index = 0;
    int start = 0;
    char *ip = s->p;

    
    while(*ip != '\0'){ // Tæller op fra index 0 til NULL-terminator
        if(*ip == ' '){  // Tjekker for mellemrum
            char *subStringToken = sub_string_token(s, index, start); // Laver ny subString
            printf("'%s'\n", subStringToken);
            start = index + 1; // Gemmer start-værdien for næste string
        }
        index++;
        ip++;
    }
    
    /* String fra sidste fra mellemrum til \0 */
    if(start < index){ 
            char *subStringToken = sub_string_token(s, index, start);
                printf("'%s'\n", subStringToken);
        }
}

char* sub_string_token(string *s, int end, int start){
    static char subStringToken[100]; // Definerer den nye subString
    int k = 0; // Tælleværdi for den nye strings index
   
   /* Indlæser værdierne fra string til subStringToken i intervallet [start;end] */
    for(int i = start; i < end; i++){
        subStringToken[k] = s->p[i]; // Laver den nye subStringToken
        k++;
    }

    subStringToken[k] = '\0'; // Terminerer subStringToken

    return subStringToken;
}

