#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        if (i % 2 == 1) {
            printf("Odd\n");
        } else {
            printf("Even\n");
        }
        i++;
    }

    return 0;
}
