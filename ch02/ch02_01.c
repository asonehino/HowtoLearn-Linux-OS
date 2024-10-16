#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void) {
    if (mkdir("han", 0755) == -1) {
        perror("han");
        exit(1);
    }
    printf("directory exists\n");
    return 0;
}