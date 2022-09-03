#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int r, c;
    cin >> r >> c;
    int petak[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> petak[i][j];
        }
    }
    return 0;
}