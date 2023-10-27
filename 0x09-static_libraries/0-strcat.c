#include <stdio.h>

char *_strcat(char *dest, const char *src) {
    char *originalDest = dest;

    while (*dest != '\0') {
        dest++;
    }

    while ((*dest++ = *src++) != '\0');

    return originalDest;
}
