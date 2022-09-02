#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool subSum(vector<int> exp, int m, vector<int> partial)
{
    int sum = 0;
    bool stat = false;
    for (int i = 0; i < partial.size(); i++)
        sum += partial.at(i);
    if (sum == m)
        return true;
    if (sum > m)
        return false;
    for (int i = 0; i < exp.size(); i++)
    {
        vector<int> remain;
        int e = exp.at(i);
        for (int j = i + 1; j < exp.size(); j++)
        {
            remain.push_back(exp.at(j));
        }
        vector<int> partial_rec(partial);
        partial_rec.push_back(e);
        stat = subSum(remain, m, partial_rec);
        if (stat == true)
        {
            return true;
        }
    }
    return stat;
}

int main(int argc, char const *argv[])
{
    int n, m, e;
    int sum = 0;
    cin >> n >> m;
    vector<int> ex;
    vector<int> temp;
    bool stat = false;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        if (e <= m)
            ex.push_back(e);
    }
    sort(ex.begin(), ex.end());
    stat = subSum(ex, m, temp);
    cout << (stat ? "bisa" : "tidak bisa");

    return 0;
}