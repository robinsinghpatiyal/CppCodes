#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a;
	if(a==1)
		cout<<0<<endl;
	else if(a==2)
		cout<<1<<endl;
	else if(a%2==0 || a==3)
		cout<<2<<endl;
	else
		cout<<3<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
