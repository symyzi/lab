#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    system("chcp 65001");
    float *array;
    float massiv[4] = {-3.4, 4.5, -5.6, 6.7};
    printf("Первое задание\n");
    array = massiv;
    printf("%.1f | %.1f | %.1f | %.1f\n", *(array), *(array + 1), *(array + 2), *(array + 3));

    float *arr;
    int size = 4, i;
    printf("второе задание\n");
    arr = (int *) malloc(size * sizeof(int));
    for (i = 0; i < 4 + size; i++) {
        arr[i] = pow(-1, i + 1) * (3.4 + 1.1 * i);
    }
    printf("%.1f | %.1f | %.1f | %.1f", arr[0], arr[1], arr[2], arr[3]);
    free(arr);
    return 0;
}
