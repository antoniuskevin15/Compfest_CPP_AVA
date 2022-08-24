#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
    long long n = 0, a = 0, b = 0;
    cin >> n >> a >> b;
    cout << n / a + n / b - n / (a * b / (gcd(a, b)));

    return 0;
}