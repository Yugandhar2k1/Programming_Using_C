#include <stdio.h>

int main() {
    int n, x, max_squares = 0;
    printf("Enter the Number of stickes and the length: ");
    scanf("%d %d", &n, &x);

    
    for (int i = x; i >= 1; i--) {
        if (x % i == 0) {
            int side_length = x / i;
            int squares = (n / (4 * side_length));
            if (squares > max_squares) {
                max_squares = squares;
            }
        }
    }

    printf("Maximum squares: %d\n", max_squares);
    return 0;
}