#include <stdio.h>
#include <string.h>

#define MAX 100

void reverseWords(char *str) {
    char words[20][MAX]; // Assuming max 20 words
    int i = 0, j = 0, k = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[k][j++] = str[i];
        } else {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }
    words[k][j] = '\0'; // Terminate the last word

    printf("Reversed sentence:\n");
    for (int l = k; l >= 0; l--) {
        printf("%s ", words[l]);
    }
    printf("\n");
}

int main() {
    char str[MAX];

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);  // Read input including spaces, until newline

    reverseWords(str);

    return 0;
}
