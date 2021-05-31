#include <bits/stdc++.h>
#include <unordered_map> //Add the tr1 library name before unordered_map,

using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 5, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
}