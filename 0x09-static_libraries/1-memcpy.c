#include <stdio.h>

char *_memcpy(char *dest, const char *src, unsigned int n) {
    char *originalDest = dest;
    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return originalDest;
}

