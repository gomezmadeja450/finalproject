#include <stdio.h>

void main() {
    int i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    
    if (i > 0) {
        for (i = 1; i <= i; ++i) {
            printf("*");
        }
    } else {
        printf("\n");
    }
}
