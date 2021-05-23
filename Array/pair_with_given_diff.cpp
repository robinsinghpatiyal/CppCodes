#include <bits/stdc++.h>
using namespace std;

void sol(int arr[], int n, int diff)
{
    int start = 0;
    int end = 1;
    sort(arr, arr + n);
    int flag = 0;
    while (n > 0)
    {
        if (arr[end] - arr[start] == diff)
        {
            cout << arr[start] << " " << arr[end] << " " << endl;
            flag = 1;
            return;
        }
        else if (arr[end] - arr[start] > diff)
        {
            start++;
        }
        else
        {
            end++;
        }
        n--;
    }

    if (flag == 0)
    {
        cout << -1;
    }
}

int main()
{
    int n = 5;
    int diff = 45;
    int arr[] = {90, 70, 20, 80, 50};
    sol(arr, n, diff);
}