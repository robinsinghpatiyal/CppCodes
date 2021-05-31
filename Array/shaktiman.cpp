#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return;
    }
    int i = 2;
    int count = 1;
    int it = 2;
    int sum = 2;
    while (sum < n)
    {
        it++;
        count++;
        sum = sum + count;
    }
    cout << it;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
        cout << endl;
    }
}