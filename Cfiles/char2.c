#include <stdio.h>

int main() 
{
    int originalArray[] = {1, 2, 3, 4, 5};
    int n = sizeof(originalArray) / sizeof(originalArray[0]);
    int copiedArray[n];
    for (int i = 0; i < n; i++) {
        copiedArray[i] = originalArray[i];
    }
    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", copiedArray[i]);
    }
    printf("\n");

    return 0;
}

