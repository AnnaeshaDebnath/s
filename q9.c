#include <stdio.h>
void getFibonacci()
 {
    int n, a = 0, b = 1, next = 0;
    printf("Enter Fibonacci term serial number: ");
    scanf("%d", &n);
    if (n == 1) next = 0;
    else if (n == 2) next = 1;
else
 {
        for (int i = 3; i <= n; i++)
 {
            next = a + b;
            a = b;
            b = next;
        }
    }
    printf("Fibonacci term serial number: %d\n", n);
    printf("Fibonacci number: %d\n", next);
}
int main()
 {
    getFibonacci();
    return 0;
}