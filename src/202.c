#include <stdio.h>

int main() {
    int i;

    printf("Please enter how many numbers you want to add: ");
    scanf("%d", &i);

    if (i > 0) {
        for (i; i >= 1; --i) {
            printf("%d + ", i);
        }
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}
