#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i < n; i++)
    {
        long long num;
        cin >> num;
        sum = sum + num;
    }
    long long ans = n * (n + 1) / 2 - sum;
    cout << ans;
}