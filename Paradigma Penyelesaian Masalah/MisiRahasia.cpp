#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int n, m;
map<int, map<int, int> > friendList;

bool relationCheck(int idx, vector<int> &tim)
{
    for (int t : tim)
    {
        if (friendList[idx][t] == 0)
            return false;
    }
    return true;
}

int recCheck()
{
    int count = 0;
    vector<int> tim;
    for (int i = 1; i <= n; i++)
    {
        tim.push_back(i);
        for (int j = 1; j <= n; j++)
        {
            if (relationCheck(j, tim))
            {
                tim.push_back(j);
            }
        }
        count = max((int)tim.size(), count);
        tim.clear();
    }
    return count;
}

int main(int argc, char const *argv[])
{
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        friendList[x][y] = 1;
        friendList[y][x] = 1;
    }
    int max = recCheck();
    cout << max;
    return 0;
}