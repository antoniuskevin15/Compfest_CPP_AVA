// scpc_2_ava
#define ll long long
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ll n, m;
    cin >> n >> m;
    ll fill = 1;
    if (n == 1 && m == 1)
    {
        fill = 0;
    }
    else if (n > m && m == 1)
    {
        fill = m * (n - 1);
    }
    else if (m > 1)
    {
        fill = (m - 1) * n;
    }
    cout << fill;
    return 0;
}