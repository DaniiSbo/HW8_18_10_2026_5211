#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double s = 0;
    double x;

    system("chcp 65001 > nul");

    for (int i = 0; i <= 10; i++) {
        x = 1 + 0.1 * i;
        s += sin(x);
    }

    printf("Значение суммы: %.4f\n", s);

    system("pause");
    return 0;
}
