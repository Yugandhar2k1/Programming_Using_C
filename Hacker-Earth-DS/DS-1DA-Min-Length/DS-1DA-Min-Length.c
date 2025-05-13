#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N=0;
        scanf("%d", &N);

        int A[N], B[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }

        int left = 0, right = N - 1;

        // Find first mismatch from left
        while (left < N && A[left] == B[left]) {
            left++;
        }

        // Find first mismatch from right
        while (right >= 0 && A[right] == B[right]) {
            right--;
        }

        if (left > right) {
            // Arrays are already equal
            printf("0\n");
        } else {
            printf("%d\n", right - left + 1);
        }
    }

    return 0;
}
