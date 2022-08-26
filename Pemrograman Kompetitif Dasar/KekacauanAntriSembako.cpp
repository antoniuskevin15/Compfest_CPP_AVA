#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<string> antrian;
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
            antrian.push_front(s);
            break;
        case 2:
            cin >> s;
            antrian.push_back(s);
            break;
        case 3:
            s = antrian.front();
            antrian.pop_front();
            udahKelar.push(s);
            break;
        case 4:
            s = antrian.back();
            antrian.pop_back();
            udahKelar.push(s);
            break;
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