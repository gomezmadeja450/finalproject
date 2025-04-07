#include <stdio.h>

int main() {
    int i;

    printf("Please enter a number: ");
    scanf("%d", &i);

    if (i % 2 == 0) {
        printf("%d is even.\n", i);
    } else {
        printf("%d is odd.\n", i);
    }

    return 0;
}
