// scpc_2_ava
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <string>
#include <math.h>
#include <iterator>

#define l long
#define ll long long
#define ld long double
#define lld long long double

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "No even numbers are allowed" << endl;
    }
    else
    {
        int baris = n * 2 + 1;
        int kolom = 5 * n;
        for (int i = 0; i < baris; i++)
        {
            if (i <= n)
            {
                for (int j = 0; j < kolom; j++)
                {
                    if (j < n + i || j >= kolom - n - i)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            else if ((i - n) <= n / 2)
            {
                int lebih = i - n + 1;
                int bintang = 0;
                int spasi = 0;
                for (int j = 0; j < kolom; j++)
                {
                    if (j < n || j >= kolom - n)
                    {
                        cout << "*";
                    }
                    else if (j == kolom / 2)
                    {
                        cout << " ";
                        spasi++;
                    }
                    else if ((j > i - 1) && bintang < n)
                    {
                        cout << "*";
                        bintang++;
                    }
                    else if (spasi == n - 1)
                    {
                        for (int x = 0; x < n; x++, j++)
                        {
                            cout << "*";
                        }
                        cout << " ";
                    }
                    else
                    {
                        cout << " ";
                        spasi++;
                    }
                }
            }

            cout << endl;
        }
    }
    return 0;
}