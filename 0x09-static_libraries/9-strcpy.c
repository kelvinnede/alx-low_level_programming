#include <stdio.h>

char *_strcpy(char *dest, const char *src) {
    char *originalDest = dest;


    while ((*dest++ = *src++) != '\0');

    return originalDest;
}
