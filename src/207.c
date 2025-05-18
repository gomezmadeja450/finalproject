#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Number %d is even or odd?\nEnter 'even' or 'odd': ", n);

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
