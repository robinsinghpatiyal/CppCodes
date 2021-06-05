#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[], int n, int x)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int start = arr[i];
        int middle = i + 1;
        int last = n - 1;
        while (middle < last)
        {
            int sum = start + arr[middle] + arr[last];
            if (sum < x)
            {
                middle++;
            }
            else if (sum > x)
            {
                last--;
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    find3Numbers(arr, n, k);
}

// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]