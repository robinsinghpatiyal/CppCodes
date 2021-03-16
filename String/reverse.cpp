#include<bits/stdc++.h>
using namespace std;

string reversefunc(string s, int n){
	for(int i=0;i<n/2;i++){
		swap(s[i],s[n-i-1]);
	}
	return s;
}

int main(){
	string s = "RobinSingh";
	int n = s.length();
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	cout<< reversefunc(s,n);
	
}
