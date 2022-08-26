#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    int max = (n - 1) * k + 1;
    int arr[max];
    int idx = 0;
    for (int x = 2; idx < max; x++)
    {
        if (isPrime(x))
        {
            arr[idx] = x;
            idx++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        idx = (i - 1) * k;
        cout << arr[idx] << endl;
    }
    return 0;
}