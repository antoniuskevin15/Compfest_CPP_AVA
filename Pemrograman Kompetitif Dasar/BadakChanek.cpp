#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int idx[q];
    for (int i = 0; i < q; i++)
    {
        cin >> idx[i];
    }
    for (int i = 0; i < q; i++)
    {
        cout << arr[--idx[i]] << endl;
    }
    return 0;
}