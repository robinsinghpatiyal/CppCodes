#include<bits/stdc++.h>
using namespace std;

int sol(string s, int l){
	int a = (int)s[0] - 96;
	//cout<<a;
	for(int i =1;i<l;i++){
		if((int)s[i]-96 < a){
			return 0;
		}
		else{
			a = (int)s[i]-96;
		}
	}
	int ans;
	for(int i =0;i<l;i++){
		ans = ans+(int)s[i]-96;
	}
	return ans;
	
}

int main(){
	string s;
	cin>>s;
	int l = s.length();
	cout<<sol(s,l);	
}
