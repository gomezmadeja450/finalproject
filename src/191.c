#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    if (i > 0) {
        for (i = 1; i <= i; i++) {
            printf("*");
        }
        return 0;
    } else {
        printf("Invalid input!\n");
        return 1;
    }
}
