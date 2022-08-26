#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    int sec = 0;
    cin >> n;
    int idx = 0;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        while (arr[i] != i)
        {
            sec++;
            swap(arr[i], arr[arr[i]]);
        }
    }
    cout << sec << endl;
    return 0;
}