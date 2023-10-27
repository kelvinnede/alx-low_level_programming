#include <stdio.h>

char *_strpbrk(const char *s, const char *accept) {
  while (*s != '\0') {
        const char *acceptPtr = accept;
        while (*acceptPtr != '\0') {
            if (*s == *acceptPtr) {
                return (char *)s;
            }
            acceptPtr++;
        }

        s++;
    } 
    return NULL;
}
