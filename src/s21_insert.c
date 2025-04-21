#include "s21_string.h"

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {

    if (src == NULL || str == NULL) return NULL;

    s21_size_t len = s21_strlen(src) + s21_strlen(str);

    char *new_str = malloc((len + 1) * sizeof(char));
    if (new_str == NULL) {
        return NULL;
    }

    //TODO:


    new_str[len] = '\0';

    return new_str;
}