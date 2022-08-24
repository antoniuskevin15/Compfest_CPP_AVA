#include <iostream>

using namespace std;

void menaraHanoi(int n, char dari, char tujuan, char aux)
{
    if (n == 0)
    {
        return;
    }
    menaraHanoi(n - 1, dari, aux, tujuan);
    cout << n << " " << dari << " " << tujuan << endl;
    menaraHanoi(n - 1, aux, tujuan, dari);
}
int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    menaraHanoi(n, 'A', 'C', 'B');
    return 0;
}