#include <stdio.h>

int main() {

    FILE *out;

    out = fopen("First.txt", "w");

    char str[10][11] = {"10.12.2021", "11.12.2021", "12.12.2021", "13.12.2021", "14.12.2021", "15.12.2021",
                        "16.12.2021", "17.12.2021", "18.12.2021", "19.12.2021"};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)fprintf(out, "%c", str[i][j]);
        fprintf(out, "\n");
    }


    fclose(out);


    return 0;
}