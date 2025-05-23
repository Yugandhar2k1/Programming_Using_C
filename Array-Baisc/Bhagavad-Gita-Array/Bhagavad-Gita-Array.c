#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of tasks: ");
    scanf("%d", &n);
    getchar(); // consume newline

    char tasks[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);
        tasks[i][strcspn(tasks[i], "\n")] = 0; // remove newline
    }

    printf("\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("Processing: %s\n", tasks[i]);
        printf("Duty done, result not stored.\n");
    }

    printf("\nKeep performing duties; let the result be handled by God - Gita 2.47\n");

    return 0;
}
