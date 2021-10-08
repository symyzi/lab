#include <stdio.h>

#define max 45
#define min 21

int main() {
    int var, var2, bit;
    scanf("%d", &var);
    printf("%d\n", min <= var && var <= max);
    scanf("%d", &var2);
    bit = (var2 >> (16 - 1)) & 1;
    printf("%d", bit);
    return 0;
}
