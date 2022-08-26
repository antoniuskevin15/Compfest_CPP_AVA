#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double input = 0, res = 0;
    cin >> input;
    if (input < 0)
    {
        return 0;
    }
    else if (input == 0)
    {
        res = 0;
    }
    else
    {
        res = 1.0 / (2.0 - input / 100);
    }
    cout << setprecision(10) << res;
    return 0;
}