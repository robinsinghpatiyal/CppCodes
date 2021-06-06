#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string one, two;

    cin >> one;
    cin >> two;

    int s1 = one.size();
    int s2 = two.size();

    if (s1 != s2)
    {
        cout << "Spy";
        return;
    }

    for (int i = 0; i < s1; i++)
    {
        if (one[i] == two[i])
        {
            cout << "Spy";
            return;
        }
    }

    for (int i = 0; i < s1; i++)
    {
        if (one[i] == one[i + 1] && (one[i] != two[i] || one[i] != two[i + 1]))
        {
            cout << "Spy";
            return;
        }
    }

    unordered_map<char, int> mp;
    unordered_map<char, int> mp1;

    for (int i = 0; i < s1; i++)
        mp[one[i]]++;

    for (int i = 0; i < s2; i++)
        mp1[two[i]]++;

    int i = 0;
    int arr[s1];

    for (auto x : mp)
    {
        arr[i] = x.second;
        i++;
    }
    i = 0;
    int arr1[s1];

    for (auto x : mp)
    {
        arr1[i] = x.second;
        i++;
    }
    int count = 1;

    // cout<<endl<<"test"<<endl;

    for (int i = 0; i < s1; i++)
    {
        //	cout<<arr[i]<<" "<<arr1[i];
        if (arr[i] == arr1[i])
        {
            count = 0;
        }
    }

    //	cout<<endl<<"test"<<endl;

    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    // Compare sorted strings

    if (count == 0)
    {
        cout << "Agent";
    }
    else
    {
        cout << "Spy";
    }
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