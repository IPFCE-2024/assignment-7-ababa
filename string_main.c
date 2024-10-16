#include "string.h"
#include <stdio.h>

int main(void){
    string s;
    initialize_string(&s);

    printf("Enter a string\n");
    scanString(&s,100);

    printf("Enter a start index and end index\n");
    int x,y;
    scanf("%d%d", &x, &y);


    int length = stringLength(&s);
    printf("\nThe length of the string is: %d\n",length);

    printf("\n");
    count_index_of_o(&s);


    int sum = count_num_of_o(&s);
    printf("\nNumber of o's in string is %d\n", sum);

    printf("\nYou entered '%s'\n",s.str);
    char *subString = sub_string(&s, x, y);
    printf("Your new string is '%s'\n", subString);


    printf("\nYou've entered the following words\n");
    string_token(&s);

    


    return 0;
}


