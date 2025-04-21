#include "s21_string.h"

void *s21_to_lower(const char *str) {
    
    if (str == NULL) return NULL;

    s21_size_t len = strlen(str);
    char *lower_str = malloc((len + 1) * sizeof(char));
    if (lower_str == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower_str[i] = str[i] + 32;
        } else {
            lower_str[i] = str[i];
        }
    }

    lower_str[len] = '\0';

    return lower_str;
}