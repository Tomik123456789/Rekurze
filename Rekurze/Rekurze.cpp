

#include <stdio.h>

long bunky(int x) {
    if (x <= 1) {
        return 1;
    }
    else {
        return 2 * bunky(x - 1);
    }
}

long fibonacci(int x) {
    if (x <= 2) {
        return 1;
    }
    else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

float urok(int x) {
    if (x <= 1) {
        return 1 * 1.01;
    }
    else {
        return urok(x - 1) * 1.01;
    }
}

int main()
{
    printf("%d: %d\n", 1, bunky(1));
    printf("%d: %d\n", 2, bunky(2));
    printf("%d: %d\n", 3, bunky(3));
    printf("%d: %d\n", 4, bunky(4));
    printf("%d\n", fibonacci(7));
    printf("%f\n", urok(1));
    printf("%f\n", urok(2));
    printf("%f\n", urok(3));
    printf("%f\n", urok(4));
    printf("%f\n", urok(5));
    printf("%f\n", urok(6));
    printf("%f\n", urok(7));
    printf("%f\n", urok(8));
    printf("%f\n", urok(9));
    printf("%f\n", urok(10));
}

