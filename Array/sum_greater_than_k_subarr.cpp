#include <bits/stdc++.h>

using namespace std;

int minSumSub(int arr[], int n, int k)
{
    int start = 0;
    int ans = INT_MAX;
    int sum = 0;
    int count = 1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > k)
        {
            return 1;
        }

        sum += arr[i];

        if (sum > k)
        {
            ans = min(i - start + 1, ans);
        }

        while (sum >= k)
        {

            sum -= arr[start];
            start++;
            if (sum > k)
            {
                ans = min(i - start + 1, ans);
            }
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 51;
    int ans = minSumSub(arr, n, k);
    cout << ans;
}