#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> antrian;
    int n;
    int ord;
    string s;
    queue<string> udahKelar;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ord;
        switch (ord)
        {
        case 1:
            cin >> s;
            antrian.push(s);
            break;
        case 2:
            s = antrian.front();
            antrian.pop();
            udahKelar.push(s);
        default:
            break;
        }
    }
    while (!udahKelar.empty())
    {
        cout << udahKelar.front() << endl;
        udahKelar.pop();
    }

    return 0;
}