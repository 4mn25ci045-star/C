#include <stdio.h>

int main(void) {
    double first, second, result;
    char operator;

    printf("Enter expression (example: 10 + 5): ");
    if (scanf("%lf %c %lf", &first, &operator, &second) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operator) {
        case '+': result = first + second; break;
        case '-': result = first - second; break;
        case '*': result = first * second; break;
        case '/':
            if (second == 0) { printf("Cannot divide by zero.\n"); return 1; }
            result = first / second;
            break;
        default: printf("Invalid operator.\n"); return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
