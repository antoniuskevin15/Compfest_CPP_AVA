#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long long path[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j > i)
            {
                path[i][j] = 0;
            }
            else if (i == 0)
            {
                path[i][j] = 1;
            }
            else
            {
                path[i][j] = path[i - 1][j] + path[i][j - 1];
            }
        }
    }
    cout << path[n][n];
    return 0;
}