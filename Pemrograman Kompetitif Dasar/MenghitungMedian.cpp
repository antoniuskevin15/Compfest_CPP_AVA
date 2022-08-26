#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.insert(upper_bound(arr.begin(), arr.end(), x), x);
        if (i % 2 == 0)
        {
            cout << arr[i / 2] << endl;
        }
        else
        {
            int res = arr[i / 2] + arr[(i / 2) + 1];
            cout << res / 2 << (res % 2 != 0 ? ".5" : "") << endl;
        }
    }
    return 0;
}