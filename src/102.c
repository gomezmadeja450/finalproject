#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("Even: ");
        } else {
            printf("Odd: ");
        }
    }

    return 0;
}
