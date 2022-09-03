#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long double power(long double a, int n)
{
    long double result = 1;
    while (n != 0)
    {
        if (a == 0)
            return 0;
        if (n & 1)
            result *= a;
        a *= a;
        n >>= 1;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    long long int m, n;
    long double before = 0, after;
    cin >> m >> n;
    long double ans = 0;
    for (long double i = 1; i <= m; i++)
    {
        after = pow(i / m, n);
        ans += i * (after - before);
        before = after;
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}