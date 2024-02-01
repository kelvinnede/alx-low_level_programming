// File: gm.c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 7) {
        fprintf(stderr, "usage: %s n1 n2 n3 n4 n5 bonus\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("--> Please make me win!\n");

    return EXIT_SUCCESS;
}
