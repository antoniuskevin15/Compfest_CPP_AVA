#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cin >> m >> n;
    int A[m];
    int B[m];
    int L[n];
    int C[n];
    int resA[n];
    int resB[n];
    for (int i = 0; i < m; i++)
    {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> L[i] >> C[i];
        resA[i] = A[0] * L[i] + B[0] * C[i];
        resB[i] = A[1] * L[i] + B[1] * C[i];
    }
    int maxA = resA[0];
    int maxB = resB[0];
    for (int i = 1; i < n; i++)
    {
        if (resA[i] >= maxA)
        {
            maxA = resA[i];
        }
        if (resB[i] >= maxB)
        {
            maxB = resB[i];
        }
    }

    return 0;
}