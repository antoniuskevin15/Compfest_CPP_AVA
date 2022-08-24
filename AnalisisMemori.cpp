#include <iostream>
#include <cmath>

using namespace std;

int countt(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        long x = 1 + countt((int) ceil((double) n / 2)) + countt((int) floor((double) n / 2));
        return x;
    } else{
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int output = countt(n);
    cout << output;
    return 0;
}