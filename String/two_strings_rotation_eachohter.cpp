#include<bits/stdc++.h>
using namespace std;

int sol(string s1, string s2){
	if(s1.length() != s2.length())
		return 0;
		
	int a;
	string temp = s1+s2;
	
	if(temp.find(s2) != string::npos){
		return 1;
	}
	else
		return 0;
	
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	//abcd bcda
	
	int a = sol(s1,s2);
	if(a==1){
		cout<<"Yes! both are rotation of one another"<<endl;
	}
	else{
		cout<<"No! they are not rotation of one another"<<endl;
	}
}
