#include <stdio.h>

int main() {
    int n, i, diff;
    int isAP = 1;  // Flag to assume array is in AP until proven otherwise

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Enter at least two elements.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    diff = arr[1] - arr[0];

    for (i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            isAP = 0;
            break;
        }
    }

    if (isAP)
        printf("Yes, it is an Arithmetic Progression with common difference %d.\n", diff);
    else
        printf("No, the array does not form an Arithmetic Progression.\n");

    return 0;
}
