#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
    char *str = NULL, c;
    int n = 1;
    str = (char *) malloc(sizeof(char));
    printf("input string \n");
    while ((c = getchar()) != '\n') {
        str[n - 1] = c;
        n++;
        str = (char *) realloc(str, n);
    }
    str[n - 1] = '\0';
    int num = 0, SLet = 0, BLet = 0;
    for (int i = 0; i < n - 1; i++) {
        int k;
        k = (int) str[i];
        if ('0' <= k && k <= '9') {
            num++;
        } else if ('a' <= k && k <= 'z') {
            SLet++;
        } else if ('A' <= k && k <= 'Z') {
            BLet++;
        }
    }
    printf("\nNumbers-%d", num);
    printf("\nSmall letters-%d", SLet);
    printf("\nBig letters-%d", BLet);

    char *numbers[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int m;
    printf("\ninput number\n");
    scanf("%d",&m);
    printf("%s",numbers[m]);
    return 0;
}
