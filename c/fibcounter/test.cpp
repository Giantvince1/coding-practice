#include <stdio.h>
int main(void) {
    int a = 1;
    int b = 1;
    int x;
    x = a + b;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", x);
    int max = 1000;
    while (x < max) {
        a = b;
        b = x;
        x = a + b;
        if (x > max) {
            printf("Done! Last number in sequence: %d%s%d\n", b, ", max number to look up to: ", max);
        }
        else {
            printf("%d\n", x);
        }
    }
}