#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 5, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<bool> freq(n, false);

    for (int i = 0; i < n; i++)
    {

        if (freq[i] == true)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                freq[j] = true;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}