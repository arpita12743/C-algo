#include <stdio.h>

int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", fib(i));
    }

    printf("\nThe %dth Fibonacci number is: %d\n", n , fib(n - 1));

    return 0;
}

/*int fib(int n) {
    if (n == 1 || n== 2)
        return n-1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nThe %dth Fibonacci number is: %d\n", n , fib(n));

    return 0;
}*/

