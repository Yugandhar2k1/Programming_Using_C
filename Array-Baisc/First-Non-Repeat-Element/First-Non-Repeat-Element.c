#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid size greater than 0.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("Only one element present: %d\n", arr[0]);
        return 0;
    }

    int allEqual = 1;
    for (i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            allEqual = 0;
            break;
        }
    }

    if (allEqual) {
        printf("All elements are equal: %d\n", arr[0]);
        return 0;
    }

    int found = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("First non-repeating element is: %d\n", arr[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No non-repeating element found.\n");
    }

    return 0;
}
