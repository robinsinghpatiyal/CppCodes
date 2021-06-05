#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int daysD, interval, prodPerDay, increaseProd;
    cin >> daysD >> interval >> prodPerDay >> increaseProd;

    int count = 0;

    int sum = 0;

    for (int i = 0; i < daysD; i++)
    {
        if (count == interval)
        {
            prodPerDay += increaseProd;
            sum += prodPerDay;

            count = 1;
        }
        else
        {
            sum += prodPerDay;
            count++;
        }
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}