#include <stdio.h>
#include <math.h>

typedef struct circle {
    int rad;
};

typedef struct lock {
    unsigned NumLock: 1;
    unsigned CapsLock: 1;
    unsigned ScrollLock: 1;
};

union keyboard {
    struct lock status;
    int number;
};

int main() {
    enum {
        book = 1, journal = 2, newspaper = 3
    };
    int var = newspaper;
    printf("element № %d\n", var);

    struct circle varCir;
    varCir.rad = 5;
    double S;
    S = M_PI * varCir.rad * varCir.rad;
    printf("ploshad kruga = %lf\n", S);

    union keyboard click;
    int vol;
    scanf("%d", &vol);
    click.number = vol;
    printf("Numlock %d\n", click.status.NumLock);
    printf("CapsLock %d\n", click.status.CapsLock);
    printf("ScrollLock %d", click.status.ScrollLock);
    return 0;
}
