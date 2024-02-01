#include <stdio.h>

int main() {
    int N, i;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N]; 

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        printf("Enter the %d element:",i);
        scanf("%d", &arr[i]);
    }

    printf("Array elements in reverse order:\n");
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
