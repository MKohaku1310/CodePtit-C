#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef long long ll;

long long nt (ll n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void check()
{
    ll n;
    scanf("%lld", &n);
    ll res;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (nt(n / i))
            {
                printf("%lld\n", n / i);
                return;
            }
            if (nt(i))
                res = i;
        }
    }
    printf("%lld\n", res);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        check();
    return 0;
}