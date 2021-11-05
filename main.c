#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char string1[10] = "kcegvdwfkl";
    char string2[15] = "vkouehvkcnkfrwb";
    char stringRes[10 + n];
    for (int i = 0; i < 10 + n; i++) {
        if (i < 10) {
            stringRes[i] = string1[i];
        } else {
            stringRes[i] = string2[i - 10];
        }
    }
    for (int i = 0; i < 10 + n; i++) {
        printf("%c", stringRes[i]);
    }

    int leight;
    if (sizeof(string1) != sizeof(string2)) {
        printf("\nstroki ne ravni");
    } else {
        leight = sizeof(string1);
        int k = 0;
        for (int i = 0; i < leight; ++i) {
            if (string1[i] != string2[i]) {
                printf("\nstroki ne ravni");
                break;
            } else {
                k++;
            }
        }
        if (k == leight) {
            printf("\nstroki ravni\n");
        }
    }

    int copy;
    scanf("\n%d", &copy);
    int l = sizeof(string2);
    char stringRes1[l];
    for (int i = 0; i < sizeof(string2); i++) {
        if (i < copy) {
            stringRes1[i] = string1[i];
        } else {
            stringRes1[i] = string2[i];
        }
    }
    for (int i = 0; i < sizeof(string2); ++i) {
        printf("%c", stringRes1[i]);
    }

    int vol = -1;
    char elem;
    scanf("\n%c", &elem);
    for (int i = 0; i < sizeof(string1); i++) {
        if (string1[i] == elem) {
            vol = i;
        }
    }
    if (vol == -1) {
        printf("element ne nayden");
    } else {
        printf("posledniy raz na %d meste", vol);
    }

    printf("\ndlina otrezka = %d \n", strcspn(string1, string2));
    return 0;
}
