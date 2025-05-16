#include <stdio.h>

int main() {
    int n=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter more than one element.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if all elements are equal
    int allEqual = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            allEqual = 0;
            break;
        }
    }

    if (allEqual) {
        printf("All elements are equal.\n");
        return 0;
    }

    // Check for duplicate values
    int hasDuplicate = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicate = 1;
                break;
            }
        }
        if (hasDuplicate) break;
    }

    if (hasDuplicate) {
        printf("Array has duplicate values.\n");
    }

    // Find largest
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}
