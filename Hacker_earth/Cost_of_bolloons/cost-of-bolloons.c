#include <stdio.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    int output[test_cases];

    for (int t = 0; t < test_cases; t++) {
        int cost_green, cost_purple, num_participants;
        scanf("%d %d %d", &cost_green, &cost_purple, &num_participants);

        int count_1 = 0, count_2 = 0;
        for (int i = 0; i < num_participants; i++) {
            int status1, status2;
            scanf("%d %d", &status1, &status2);

            if (status1 == 1) {
                count_1++;
            }
            if (status2 == 1) {
                count_2++;
            }
        }
        int cost_1 = count_1 * cost_green + count_2 * cost_purple;
        int cost_2 = count_1 * cost_purple + count_2 * cost_green;

        if (cost_1 < cost_2) {
            output[t] = cost_1;
        } else {
            output[t] = cost_2;
        }
    }
    for (int i = 0; i < test_cases; i++) {
        printf("%d\n", output[i]);
    }
    return 0;
}
