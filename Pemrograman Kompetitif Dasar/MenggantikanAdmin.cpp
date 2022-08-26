#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string ord, name;
    map<string, int> adminList;
    map<string, int> tanyaList;
    map<string, int>::iterator itr;
    for (int i = 0; i < n; i++)
    {
        cin >> ord >> name;
        if (ord == "DAFTAR")
        {
            if (adminList.find(name) == adminList.end())
            {
                adminList.insert(pair<string, int>(name, 0));
            }
            else
            {
                adminList[name]++;
            }
        }
        else if (ord == "TANYA")
        {
            if (adminList.find(name) != adminList.end() && adminList[name] <= 1)
            {
                cout << ++adminList[name] << endl;
            }
            else if (adminList[name] > 1)
            {
                cout << adminList[name] << endl;
            }
            else
            {
                adminList.insert(pair<string, int>(name, 0));
                cout << adminList[name] << endl;
            }
        }
    }

    return 0;
}