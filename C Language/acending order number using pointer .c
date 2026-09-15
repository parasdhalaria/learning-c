#include <stdio.h>

int main() {
    int num;
    int arr[7];
    int *ptr = arr;
    int i, j, temp;

    scanf("%d", &num);

    for (i = 0; i < 7; i++) {
        *(ptr + i) = num % 10;
        num = num / 10;
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    for (i = 0; i < 7; i++) {
        printf("%d", *(ptr + i));
    }
    
    printf("\n");

    return 0;
}