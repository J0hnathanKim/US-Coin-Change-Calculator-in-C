#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int testcase = 0;
    int input = 0;
    int q, d, n, p;

    // Read the number of test cases
    scanf("%d", &testcase);
    while (testcase > 0) {
        // Read the amount in cents
        scanf("%d", &input);

        // Calculate number of quarters (25 cents)
        q = input / 25;
        input %= 25;

        // Calculate number of dimes (10 cents)
        d = input / 10;
        input %= 10;

        // Calculate number of nickels (5 cents)
        n = input / 5;
        input %= 5;

        // Remaining pennies (1 cent)
        p = input;

        printf("%d %d %d %d\n", q, d, n, p);
        testcase -= 1;
    }
    return 0;
}
