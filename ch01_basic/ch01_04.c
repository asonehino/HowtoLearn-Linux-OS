#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main(void) {
    if (access("test.txt", R_OK) == -1) {
        perror("test.txt");
        exit(1);
    }
    printf("file exists.\n");
    return 0;
}