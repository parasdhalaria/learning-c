#include <stdio.h>

int main() {
    int arr[7];

    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    int k = 0;
    
    for (int i = 0; i < 7; i++) {
        if (arr[i] != 0) {
            arr[k] = arr[i];
            k++;
        }
    }

    for (int i = k; i < 7; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < 7; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}