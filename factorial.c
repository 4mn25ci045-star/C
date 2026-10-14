#include <stdio.h>
int main(void) { int n, i; unsigned long long result = 1; scanf("%d", &n); for (i = 2; i <= n; i++) result *= i; printf("Factorial: %llu\n", result); return 0; }
