#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// void computeLPSArray(string pat, int M, int *lps)
// {
//     int len = 0;
//     lps[0] = 0;
//     int i = 1;
//     while (i < M)
//     {
//         if (pat[i] == pat[len])
//         {
//             len++;
//             lps[i] = len;
//             i++;
//             continue;
//         }
//         else
//         {
//             if (len != 0)
//             {
//                 len = lps[len - 1];
//                 continue;
//             }
//             else
//             {
//                 lps[i] = 0;
//                 i++;
//                 continue;
//             }
//         }
//     }
// }

// void kmp(string s, string pat)
// {
//     bool stat = false;
//     int pat_len = pat.length();
//     int s_len = s.length();
//     int lps[s_len];
//     computeLPSArray(pat, s_len, lps);
//     int i = 0, j = 0;
//     while ((s_len - i) >= (pat_len - j))
//     {
//         if (pat[j] == s[i])
//         {
//             j++;
//             i++;
//         }
//         if (j == pat_len)
//         {
//             stat = true;
//             break;
//         }
//         else if (i < s_len && pat[j] != s[i])
//         {
//             if (j != 0)
//             {
//                 j = lps[j - 1];
//             }
//             else
//             {
//                 i = i + 1;
//             }
//         }
//     }
//     cout << (stat ? "YA" : "TIDAK");
// }

int main(int argc, char const *argv[])
{
    string s, pat;
    cin >> s >> pat;
    cout << (s.find(pat) != string::npos ? "YA" : "TIDAK");
    // kmp(s, pat);
    return 0;
}