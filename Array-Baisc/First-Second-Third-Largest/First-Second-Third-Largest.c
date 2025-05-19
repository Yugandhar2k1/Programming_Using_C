#include <stdio.h>

int main() {
    int n, i, j, isDuplicate = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter more than 1 element.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if all elements are equal
    int allEqual = 1;
    for (i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            allEqual = 0;
            break;
        }
    }

    if (allEqual) {
        printf("All elements are equal.\n");
        return 0;
    }

    // Check and print duplicates
    printf("Duplicate values: ");
    int hasDuplicate = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Check if already printed
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    printf("%d ", arr[i]);
                    hasDuplicate = 1;
                }
            }
        }
    }
    if (!hasDuplicate) {
        printf("None");
    }
    printf("\n");

    // Find top 3 largest unique elements
    // Remove duplicates by creating a unique array
    int unique[n], uniqueCount = 0;
    for (i = 0; i < n; i++) {
        int exists = 0;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            unique[uniqueCount++] = arr[i];
        }
    }

    // Sort unique array in descending order (simple bubble sort)
    for (i = 0; i < uniqueCount - 1; i++) {
        for (j = i + 1; j < uniqueCount; j++) {
            if (unique[i] < unique[j]) {
                int temp = unique[i];
                unique[i] = unique[j];
                unique[j] = temp;
            }
        }
    }

    // Print top 3 largest
    printf("Top %d largest values:\n", uniqueCount < 3 ? uniqueCount : 3);
    for (i = 0; i < uniqueCount && i < 3; i++) {
        printf("%dst Largest: %d \n", i+1, unique[i]);
    }
    printf("\n");

    return 0;
}
