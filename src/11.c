#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5;
    float *arr = (float *)malloc(num * sizeof(float));
    for (int i = 0; i < num; i++) {
        arr[i] = (float)rand() / RAND_MAX;
    }
    for (int i = 0; i < num; i++) {
        printf("%.2f ", arr[i]);
    }
    free(arr);
    return 0;
}
