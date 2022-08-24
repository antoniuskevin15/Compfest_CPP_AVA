#include <iostream>
using namespace std;

int main()
{
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int z = x;
    int count = 0;
    do
    {
        z = (a*z + b)%c;
        count++;
    } while (z!=x);
    cout << count;
    return 0;
}