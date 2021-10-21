#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    printf("Первое задание \n");
    int array[6] = {34, 45, 56, 67, 78, 89};
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }

    printf("\n Второе задание\n");
    int mas1[2][2] = {{2, 1},
                      {3, 2}};
    int mas2[2][2] = {{1, 2},
                      {3, 1}};
    int masr[2][2] = {{mas1[0][0] * mas2[0][0], mas1[0][1] * mas2[0][1]},
                      {mas1[1][0] * mas2[1][0], mas1[1][1] * mas2[1][1]}};
    printf("%d  %d\n%d  %d", masr[0][0], masr[0][1], masr[1][0], masr[1][1]);
    return 0;
}
