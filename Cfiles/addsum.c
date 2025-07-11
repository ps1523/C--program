#include <stdio.h>
int isEven(int num) {
    return num % 2 == 0;
}
void printEvenNumbersInRange(int start, int end) {
    int current = start;
    while (current <= end) {
        if (isEven(current)) {
            printf("%d ", current);
        }
        current++;
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d are:\n", start, end);
    printEvenNumbersInRange(start, end);

    return 0;
}

