#include <stdio.h>

int main() {
    int arr[100];  // Array to store elements
    int n, i, j, count = 0;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter the %d element:",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;  
                break; 
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
