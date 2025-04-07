#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    for(i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("The sum of even numbers from 1 to 10 is: %d\n", sum);
    return 0;
}
