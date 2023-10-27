#include <stdio.h>

char *_strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return (char *)haystack;
    }
    while (*haystack != '\0') {
        const char *hay = haystack;
        const char *need = needle;
        while (*need != '\0' && *hay == *need) {
            hay++;
            need++;
        }
        if (*need == '\0') {
            return (char *)haystack;
        }
        haystack++;
    }
    return NULL;
}
