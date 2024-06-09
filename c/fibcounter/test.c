#include <stdio.h>
int main(void) {
    long int a = 1;
    long int b = 1;
    long int x;
    x = a + b;
    printf("%ld\n", a);
    printf("%ld\n", b);
    printf("%ld\n", x);
    long int max = 32767;
    while (x < max) {
        a = b;
        b = x;
        x = a + b;
        if (x > max) {
            printf("Done! Last number in sequence: %ld%s%ld\n", b, ", max number to look up to: ", max);
        }
        else {
            printf("%ld\n", x);
        }
    }
}