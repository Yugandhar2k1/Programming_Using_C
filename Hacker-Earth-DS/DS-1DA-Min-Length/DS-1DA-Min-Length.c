/* 🧠 Problem Understanding

You are given two arrays A and B of length N. They are permutations of each other (i.e., same elements in possibly different order).
✅ You're allowed only one operation:
Choose any subarray in both arrays (same index range),
Sort both selected subarrays in ascending order,
After this operation, both arrays must become identical.

🔍 Your task:
Find the minimum length of the subarray you need to sort to make both arrays identical.

🧩 Key Insight
Since both arrays are permutations of each other, the only difference is order.

So, to solve this:
Traverse from left to right until elements differ — call this left.
Traverse from right to left until elements differ — call this right.
The minimum subarray that must be sorted is from left to right.

✅ Sorting this subarray in both A and B will make them identical.
📏 Steps to Solve
For each test case:

Read N, A[], and B[]
Initialize left = 0, right = N-1
While A[left] == B[left] → increment left
While A[right] == B[right] → decrement right
If left > right, arrays are already the same ⇒ answer is 0
Else, the answer is (right - left + 1)  */

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
