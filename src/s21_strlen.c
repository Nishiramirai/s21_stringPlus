#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
    int len = 0;

    while (*str) {
        len += 1;
        str += 1;
    }

    return len;
}