#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int len, q;
    cin >> len >> q;
    string s;
    cin >> s;
    int ord, a, b;
    char temp;
    for (int i = 0; i < q; i++)
    {
        cin >> ord >> a >> b;
        a--;
        b--;
        if (ord == 1)
        {
            swap(s[a],s[b]);
        }
        else if (ord == 2)
        {
            int diff = b-a+1;
            diff/=2;
            for (int i = 0; i < diff; i++)
            {
                temp = s[a + i];
                s[a + i] = s[b - i];
                s[b - i] = temp;
            }
        }
    }
    cout << s;

    return 0;
}