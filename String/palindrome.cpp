#include<bits/stdc++.h>
using namespace std;

string rev(string s){
	int n = s.length();
	for(int i=0;i<n/2;i++){
		swap(s[i],s[n-i-1]);
	}
	return s;
}

int main(){
	string s;
	cin>>s;
	if(s == rev(s))
		cout<<"It is a palindrome";
	else
		cout<<"It is not a palindrome";
}
