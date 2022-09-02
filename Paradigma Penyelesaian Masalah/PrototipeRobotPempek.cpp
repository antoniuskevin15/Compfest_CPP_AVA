#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, k, q, r, c;
    int res;
    cin >> n >> m >> k >> q;
    char kolam[n + 1][m + 1];
    int idx = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> kolam[i][j];
        }
    }
    while (q-- > 0)
    {
        cin >> r >> c;
        for (int x = 1; x <= n; x++)
        {
            if (res == 1)
                break;
            for (int y = 1; y <= m; y++)
            {
                if (kolam[x][y] == 'X')
                {
                    res = min(res, abs(r - x) + abs(c - y));
                }
            }
        }
        cout << res << endl;
        res = 1001;
    }

    return 0;
}