#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 1e5 + 10;
    int freq[N] = {0};

    int n, x;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        freq[x]++;
    }

    int newArr[n], k = 0;

    for (int i = 0; i < N; i++)
    {
        if (freq[i] > 1)
        {
        ROBIN:
            if (freq[i - 1] == 0)
            {
                freq[i] = freq[i] - 1;
                freq[i - 1]++;
            }
            else if (freq[i + 1] == 0)
            {
                freq[i] = freq[i] - 1;
                freq[i + 1]++;
            }

            if (freq[i] > 1 && ((freq[i - 1] == 0) || (freq[i + 1] == 0)))
            {
                // cout<<"CHECK: "<<freq[i] <<freq[i-1]<<" "<<freq[i+1]<<endl;
                goto ROBIN;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (freq[i] > 0)
            ans++;
    }
    cout << "Answer of the ROBIN's ques is: " << ans;
    return 0;
}