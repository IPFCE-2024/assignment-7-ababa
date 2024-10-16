#include "stack.h"
#include <stdio.h>
#include <assert.h>

int main(void){
    stack s;
    initialize(&s);

    int x = 5;
    push(x,&s);
    int y = pop(&s);
    printf("x = %d, y = %d\n",x,y);

    int x0 = 1;
    push(x0,&s);

    int x1 = -10;
    push(x1,&s);

    int y0 = pop(&s);
    int y1 = pop(&s);
    printf("x0 = %d, y1 = %d\n",x0,y1);
    printf("x1 = %d, y0 = %d\n",x1,y0);

}
