#include <stdio.h>

void main() {
    int i;
    int sum = 0;

    for(i = 1; i <= 5; i++) {
        if(i % 2 == 0)
            continue;
        else if(i % 3 == 0) 
            break;
        else
            printf("%d", i);
        sum += i;
    }
    printf("\nSum: %d", sum);
}
