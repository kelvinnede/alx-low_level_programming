#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
    char *originalS = s;
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }

    return originalS;
}
