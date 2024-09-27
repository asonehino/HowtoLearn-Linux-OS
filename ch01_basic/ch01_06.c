#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    printf("argc = %d\n", argc);
    for (n = 0; n < argc; n++)
        printf("argv[%d] = %s\n", n, argv[n]);
        //argv로 전달되는 값은 문자열이므로 printf()로 출력할 때 %s를 사용한다
}
