#include <stdio.h>

int main() {
    int n, i, j, count;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid size greater than 0.\n");
        return 1;
    }

    int arr[n], freq[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array
    }

    for(i = 0; i < n; i++) {
        count = 1;
        if(freq[i] != 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    printf("\nFrequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("Element %d occurs %d time%s\n", arr[i], freq[i], freq[i] > 1 ? "s" : "");
        }
    }

    return 0;
}
