#include <stdio.h>
int main() {
    int arr[100], n, i, specified_position, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the specific position in the array where you wish to insert the element:\n");
    scanf("%d", &specified_position);
    printf("Enter the element in the array to insert in the specified position:\n");
    scanf("%d", &element);

if (specified_position < 0 || specified_position > n) {
        printf("Invalid specified position.");
        return 0;  
    }
    for (i = n; i >= specified_position; i--) {
        arr[i + 1] = arr[i];
    }  
    arr[specified_position] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
