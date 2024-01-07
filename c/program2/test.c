#include <stdio.h>
#include <string.h>
int main(void) {
    char* prefix = "test.";
    int a = 0;
    while (a < 1000) {
        a++;
        char name[20];
        sprintf(name, "%s%i", prefix, a);
        FILE* ptr = fopen(name, "w");
        fprintf(ptr, "\n");
        fclose(ptr);
    }
}