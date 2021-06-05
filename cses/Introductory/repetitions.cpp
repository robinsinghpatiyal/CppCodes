#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 1;
    int maxi = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            maxi = max(cnt, maxi);
            cnt = 1;
        }
    }
    cout << max(maxi, cnt);
}