#include <stdio.h>
#include <time.h>

long long int factorial(int n, int use_tail_recursion);
long long int fibonacci(int n, int use_tail_recursion);
void run_factorial(int use_tail_recursion);
void run_fibonacci(int use_tail_recursion);

int main()
{
    int option, use_tail_recursion;
    printf("Enter an option:\n1. Factorial\n2. Fibonacci\n");
    scanf("%d", &option);

    printf("Do you want to use tail recursion?\n1. Yes\n2. No\n");
    scanf("%d", &use_tail_recursion);

    switch (option)
    {
    case 1:
        run_factorial(use_tail_recursion);
        break;
    case 2:
        run_fibonacci(use_tail_recursion);
        break;
    default:
        printf("Invalid option\n");
    }

    return 0;
}

long long int factorial(int n, int use_tail_recursion)
{
    if (use_tail_recursion && n > 0)
    {
        return n * factorial(n - 1, 1);
    }
    else
    {
        long long int result = 1;
        for (int i = n; i > 0; i--)
        {
            result *= i;
        }
        return result;
    }
}

long long int fibonacci(int n, int use_tail_recursion)
{
    if (use_tail_recursion && n > 2)
    {
        return fibonacci(n - 1, 1) + fibonacci(n - 2, 1);
    }
    else
    {
        long long int a = 0, b = 1, temp;
        for (int i = 0; i < n; i++)
        {
            temp = a + b;
            a = b;
            b = temp;
        }
        return a;
    }
}
void run_factorial(int use_tail_recursion)
{
    int n;
    printf("Enter a positive integer for n: ");
    scanf("%d", &n);

    clock_t start, end;
    long double time_taken;

    start = clock();
    long long int result = factorial(n, use_tail_recursion);
    end = clock();

    time_taken = ((long double)(end - start)) / CLOCKS_PER_SEC;
    printf("Result: %lld\nTime taken: %.2Le seconds\n", result, time_taken);
}

void run_fibonacci(int use_tail_recursion)
{
    int n;
    printf("Enter a positive integer for n: ");
    scanf("%d", &n);

    clock_t start, end;
    long double time_taken;

    start = clock();
    long long int result = fibonacci(n, use_tail_recursion);
    end = clock();

    time_taken = ((long double)(end - start)) / CLOCKS_PER_SEC;
    printf("Result: %lld\nTime taken: %.2Le seconds\n", result, time_taken);
}
