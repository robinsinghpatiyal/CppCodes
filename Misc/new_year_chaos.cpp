#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
	
	vector<int> q(n);
	int a,b,c;
	int ans=0;
	
	for(int i=0;i<n;i++){
		cin>>q[i];
	}
	
	    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

