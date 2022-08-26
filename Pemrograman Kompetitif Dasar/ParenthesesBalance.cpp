#include <iostream>
#include <stack>

using namespace std;

bool checkBalance(string s)
{
    stack<char> brackets;
    for (int i = 0; i < s.length(); i++)
    {
        if (brackets.empty())
        {
            brackets.push(s[i]);
        }
        else if (brackets.top() == '(' && s[i] == ')' ||
                 brackets.top() == '[' && s[i] == ']' ||
                 brackets.top() == '{' && s[i] == '}')
        {
            brackets.pop();
        }
        else
        {
            brackets.push(s[i]);
        }
    }
    if (brackets.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    bool stat[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        stat[i] = checkBalance(s);
    }
    for (int i = 0; i < n; i++)
    {
        if (stat[i])
        {
            cout << "ya" << endl;
        }
        else
        {
            cout << "tidak" << endl;
        }
    }

    return 0;
}