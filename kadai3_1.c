#include <stdio.h>
#include <limits.h>

int main() {
    printf("charの最大値: %d\n", CHAR_MAX);
    printf("charの最小値: %d\n", CHAR_MIN);
    printf("charのビット幅: %dビット\n", CHAR_BIT);

    printf("shortの最大値: %d\n", SHRT_MAX);
    printf("shortの最小値: %d\n", SHRT_MIN);
    printf("shortのビット幅: %dビット\n", sizeof(short) * CHAR_BIT);

    printf("longの最大値: %ld\n", LONG_MAX);
    printf("longの最小値: %ld\n", LONG_MIN);
    printf("longのビット幅: %dビット\n", sizeof(long) * CHAR_BIT);

    return 0;
}
