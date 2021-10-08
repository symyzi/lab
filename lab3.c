#include<stdio.h>
#include<math.h>


int main() {
    unsigned a;
    scanf("%o", &a);
    printf("%d\n", a);
    printf("%X %X\n", a, a >> 4);
    printf("%X %X\n", a, ~a);
    unsigned b, c;
    scanf("%X", &b);
    c = b & a;
    printf("%X", c);

    return 0;
}
