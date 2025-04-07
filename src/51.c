#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 10) {
        if (i % 2 == 0) {
            printf("Even number: %d\n", i);
        } else {
            printf("Odd number: %d\n", i);
        }
        i++;
    }
    return 0;
}
