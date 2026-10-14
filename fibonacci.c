#include <stdio.h>
int main(void) { int n, i; long a = 0, b = 1, next; scanf("%d", &n); for (i = 0; i < n; i++) { printf("%ld ", a); next = a + b; a = b; b = next; } printf("\n"); return 0; }
