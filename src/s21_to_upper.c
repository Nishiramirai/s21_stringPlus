#include "s21_string.h"

void *s21_to_upper(const char *str) {
    
    if (str == NULL) return NULL;

    s21_size_t len = s21_strlen(str);
    char *upper_str = malloc((len + 1) * sizeof(char));
    if (upper_str == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            upper_str[i] = str[i] - 32;
        } else {
            upper_str[i] = str[i];
        }
    }
    upper_str[len] = '\0';

    return upper_str;
}