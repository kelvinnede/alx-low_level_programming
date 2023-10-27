#include <stdio.h>

char *_strncpy(char *dest, const char *src, int n) {
    char *originalDest = dest;

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return originalDest;
}
