#include "s21_string.h"

int main(void) {
    printf("%d\n", s21_strlen(""));
    printf("%d\n", s21_strlen("a"));
    printf("%d\n", s21_strlen("ab"));
    printf("%d\n", s21_strlen("bca"));
    printf("%d\n", s21_strlen("1234567890"));
}