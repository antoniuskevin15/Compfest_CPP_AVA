#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q;
    string name;
    cin >> n >> q;
    map<string, int> daftar;
    for (int i = 1; i <= n; i++)
    {
        cin >> name;
        daftar.insert(pair<string, int>(name, i));
    }
    for (int i = 0; i < q; i++)
    {
        cin >> name;
        if (daftar.find(name) != daftar.end())
        {
            cout << daftar[name] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}