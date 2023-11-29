#include <stdio.h>

int main(void) {
    unsigned long long int a = 1;
    unsigned long long int b = 1;
    unsigned long long int x;
    x = a + b;
    printf("%llu\n", a);
    printf("%llu\n", b);
    printf("%llu\n", x);
    unsigned long long int max = 1000;
    while (x < max) {
        a = b;
        b = x;
        x = a + b;
        if (x > max) {
            printf("Done! Last number in sequence: %llu%s%llu\n", b, ", max number to look up to: ", max);
        }
        else {
            printf("%llu\n", x);
        }
    }
}