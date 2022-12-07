#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdlib.h>

#define endl printf("\n")
#define int long long

int fib(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return fib(n - 1) + fib(n - 2);
}

int C(int n, int m)
{
    if (n == m || m == 0)
        return 1;
    return C(n - 1, m) + C(n - 1, m - 1);
}

int fpow(int a, int b, int mod)
{
    int base = 1;
    while (b)
    {
        if (b & 1)
            base = base * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return base;
}

signed main()
{
    int i, j, k, m, n, t;
    printf("How many queries do you want: ");
    scanf("%lld", &t);
    endl;
    while (t--)
    {
        printf("Which type of query do you want: ");
        scanf("%lld", &k);
        if (k == 1)
        {
            printf("Please enter N: ");
            scanf("%lld", &n);
            m = 1;
            for (int i = 2; i <= n; i++)
                m *= i;
            printf("%lld", m);
        }
        else if (k == 2)
        {
            printf("Please enter i: ");
            scanf("%lld", &n);
            printf("%lld", fib(n));
        }
        else if (k == 3)
        {
            printf("Please enter n and k: ");
            scanf("%lld %lld", &n, &m);
            printf("%lld", C(n, m));
        }
        else if (k == 4)
        {
            printf("Please enter x, y and m: ");
            scanf("%lld %lld %lld", &n, &m, &j);
            printf("%lld", fpow(n, m, j));
        }
        endl;
    }
    return 0;
}