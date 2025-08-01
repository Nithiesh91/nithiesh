#include <stdio.h>

// Helper function to find the maximum of two integers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function to find the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    int max1 = max(a, b);
    int max2 = max(c, d);
    return max(max1, max2);
}

int main() {
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);

    int result = max_of_four(a, b, c, d);
    printf("%d\n", result);

    return 0;
}