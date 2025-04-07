#include <stdio.h>
int main() {
    int i;
    printf("Enter how many numbers you want: ");
    scanf("%d", &i);
    if (i <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    for (i = 0; i < i; i++) {
        printf("%d\n", i);
    }
    return 0;
}
