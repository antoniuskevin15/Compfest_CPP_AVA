#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void findlcs(string s, string t, string x)
{
    int m = s.size();
    int n = t.size();

    int LCS[m + 1][n + 1];
    int i, j;
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCS[i][j] = 0;
            else if (s[i - 1] == t[j - 1])
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            else
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        }
    }
    int idx = LCS[m][n];
    char lcsString[idx + 1];
    string temp("", idx + 1);
    i = m;
    j = n;
    while (i > 0 && j > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            // cout<<i<<" "<<j<<" "<<idx<<s[i-1]<<endl;
            temp[idx - 1] = s[i - 1];
            if (temp.find(x) == -1)
            {
                lcsString[idx - 1] = s[i - 1];
            }
            else
            {
                temp.erase(idx - 1, 1);
            }
            i--;
            j--;
            idx--;
        }
        else if (LCS[i - 1][j] > LCS[i][j - 1])
            i--;
        else
            j--;
    }
    // cout<<temp.size()<<endl;
    if (temp.size()==1)
    {
        cout << "-1";
    }
    else
    {
        for (int x = 0; x < LCS[m][n]; x++)
        {
            cout << lcsString[x];
        }
    }
}

int main(int argc, char const *argv[])
{
    string s, t, x;
    cin >> s >> t >> x;
    // cout << s[0] << " " << t[0] << " " << x[0];
    findlcs(s, t, x);
    return 0;
}