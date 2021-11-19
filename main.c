#include <stdio.h>
#include <malloc.h>

int NOD(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int NOK(int a, int b) {
    return a * b / NOD(a, b);
}

void number(int num) {

    int *arr = (int *) calloc(1, 1 * sizeof(int));
    int i = -1;

    while (num > 0) {
        i += 1;
        arr[i] = num % 10;
        arr = (int *) realloc(arr, (i + 1) * sizeof(int));
        num /= 10;
    }

    for (int j = i; j >= 0; j--) {

        printf("%d ", arr[j]);
    }

}

int main() {
    int a, b;
    printf("input numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("NOD=%d\n", NOD(a, b));
    printf("NOK=%d\n", NOK(a, b));

    int num;
    scanf("%d", &num);
    number(num);
    return 0;
}
