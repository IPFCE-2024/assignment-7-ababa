#pragma once

#ifndef STRING_H
#define STRING_H


typedef struct {
    char str[100];
    char *p;
} string;




void initialize_string(string *s);
void scanString(string *s, int size);
void count_index_of_o(string *s);
int stringLength(string *s);
int count_num_of_o(string *s);
char* sub_string(string *s, int x, int y);

void string_token(string *s);
char* sub_string_token(string *s, int index, int start);

#endif
