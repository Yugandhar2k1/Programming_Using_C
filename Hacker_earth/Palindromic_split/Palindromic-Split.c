/*
 * Palindromic-Split.c
 *
 *  Created on: 01-Mar-2024
 *      Author: Yugandhar
 */

#include <stdio.h>
#include <string.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum number of palindromic subsequences for a given string
int maxPalindromicSubsequences(char s[]) {
    int n = strlen(s);
    int dp[n][n]; // Define a 2D array for dynamic programming

    // Initialize the diagonal elements of dp as 0
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0; // Single character cannot form a palindromic subsequence
    }

    // Iterate over all possible lengths of subsequences
    for (int l = 1; l <= n; l++) {
        // Iterate over all possible starting positions in the string
        for (int i = 0; i < n - l + 1; i++) {
            int j = i + l - 1; // Calculate the ending position
            // If the characters at positions i and j are the same
            if (s[i] == s[j]) {
                // If l is 2, two same characters can form a palindromic subsequence
                if (l == 2) {
                    dp[i][j] = 1;
                } else {
                    // Update dp[i][j] based on the count from the inner substring
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                }
            } else {
                // Update dp[i][j] as the maximum count from excluding s[i] or s[j]
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    // Return the maximum number of palindromic subsequences
    return dp[0][n - 1];
}


int main() {
    int test_cases;
    // Input the number of test cases
    scanf("%d", &test_cases);

    // Loop through each test case
    while (test_cases--) {
        char s[1000]; // Assuming input string length is less than 1000
        // Input the string for the current test case
        scanf("%s", s);
        // Output the maximum number of palindromic subsequences for the current test case
        printf("%d\n", maxPalindromicSubsequences(s));
    }

    return 0;
}
