#include <iostream>
// #include <bits/stdc++.h>

using namespace std;
void display(int arr[], int n, int diff)
{
    int d = 0;
    int d_arr[n - 1];
    bool stat = true;
    for (int i = 0; i < n - 1; i++)
    {
        d = abs(arr[i] - arr[i + 1]);
        d_arr[i] = d;
    }
    for (int i = 0; i < n - 1; i++)
    {
        // cout<<d_arr[i]<<" ";
        if (d_arr[i] > diff)
        {
            stat = false;
        }
    }
    if (stat)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void permute(int arr[], int n, int diff)
{
    sort(arr, arr + n);

    do
    {
        display(arr, n, diff);

    } while (next_permutation(arr, arr + n));
}

int main(int argc, char const *argv[])
{
    int n = 0;
    int diff = 0;
    cin >> n >> diff;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }
    permute(arr, n, diff);
    return 0;
}