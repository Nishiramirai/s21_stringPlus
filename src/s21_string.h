// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11 + (strlen)
// 12
// 13
// 14
// 15


#include <stdio.h>

typedef unsigned long long s21_size_t;

#define S21_NULL ((void*)0)


s21_size_t s21_strlen(const char *str);


void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);