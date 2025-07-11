#include <stdio.h>
int isPrime(int num);
void printPrimesInRange(int start, int end);

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    printPrimesInRange(start, end);

    return 0;
}
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrimesInRange(int start, int end) {
    int k = start;
    while (k <= end) {
        if (isPrime(k)) {
            printf("%d ", k);
        }
        k++;
    }
    printf("\n");
}

