#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int solve(int N, int start, int finish, int ticket_cost[]) {
    if (start == finish)
        return 0;

    // Convert to 0-based indexing
    start--;
    finish--;

    int clockwise_cost = 0;
    int i = start;
    while (i != finish) {
        clockwise_cost += ticket_cost[i];
        i = (i + 1) % N;
    }

    int anticlockwise_cost = 0;
    i = start;
    while (i != finish) {
        i = (i - 1 + N) % N;  // move backwards circularly
        anticlockwise_cost += ticket_cost[i];
    }

    return min(clockwise_cost, anticlockwise_cost);
}

int main() {
    int N;
    scanf("%d", &N);

    int start, finish;
    scanf("%d %d", &start, &finish);

    int ticket_cost[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &ticket_cost[i]);
    }

    int result = solve(N, start, finish, ticket_cost);
    printf("%d\n", result);

    return 0;
}
