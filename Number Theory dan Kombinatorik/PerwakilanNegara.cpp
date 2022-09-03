#include <iostream>

using namespace std;
#define ll long long
ll factorial[1001];

ll power(ll a, ll b, ll mod)
{
    ll x = 1, y = a;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            x = (x * y);
            if (x > mod)
                x %= mod;
        }
        y = (y * y);
        if (y > mod)
            y %= mod;
        b /= 2;
    }
    return x;
}

ll modular_inverse(ll n, ll mod)
{
    return power(n, mod - 2, mod);
}

ll nCr(ll n, ll k, ll mod)
{
    return (factorial[n] * ((modular_inverse(factorial[k], mod) * modular_inverse(factorial[n - k], mod)) % mod)) % mod;
}
int main(int argc, char const *argv[])
{
    ll n, k, m;
    cin >> n >> k >> m;
    if (n <= 1000)
    {
    }
    factorial[0] = 1;
    for (int i = 1; i <= 1000; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % 1000000007;
    }
    ll result = nCr(n, k, m);
    cout << result;
    return 0;
}