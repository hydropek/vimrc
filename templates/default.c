#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define debugf(...) fprintf(stderr, __VA_ARGS__)
#define debugv(fmt, ...) \
    fprintf(stderr, "<%s:%d> " fmt "\n", __func__, __LINE__, ##__VA_ARGS__)

int read(void) {
    int a = 0, f = 0; char c = getchar();
    while (!isdigit(c)) { f ^= c == '-', c = getchar(); }
    while (isdigit(c)) { a = a * 10 + (c ^ 48), c = getchar(); }
    a *= f ? -1 : 1;
    return a;
}

int main(int argc, char *argv[]) {
    return 0;
}
