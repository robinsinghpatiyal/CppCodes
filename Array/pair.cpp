#include <bits/stdc++.h>
using namespace std;

int sumFunc(int a)
{
    return (a * (a - 1)) / 2;
}

int main()
{
    int num;
    int k;
    cin >> num;
    cin >> k;
    int size = k;
    int arr[k];
    int val = num / k;

    for (int i = 0; i < k; i++)
    {
        arr[i] = val;
    }

    k = num - val * k;
    int i = 0;
    while (k > 0)
    {
        arr[i]++;
        k--;
        i++;
    }
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + sumFunc(arr[i]);
    }
    cout << sum;
    return 0;
}