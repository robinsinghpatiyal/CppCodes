#include<bits/stdc++.h>
using namespace std;

/*
s1 = abc
s2 = xyz
s3 = ayczxb
temp = abcxyz
*/

int sol(string s1, string s2, string s3){
	string temp = s1+s2;
	int n = temp.length();
	int count =0;
	if(temp.length() != s3.length()){
		return 0;
	}
		for(int i=0;i<n;i++){
		for(int j=0; j<n; j++){
			if(s3[i]==temp[j]){
			count = count +1;
		//	cout<<count<<" "<<s3[i];
			temp[j]='#';
			s3[i]='*';
		}
	}
}
	//cout<<endl<<count<<" "<<n<<endl;
	
	if(count == n){
		return 1;
	}
	else
		return 0;
		
}

int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	
	int a = sol(s1,s2,s3);
	
	if(a==1)
		cout<<"Yes! the third string is the valid shuffle of the two strings";
	else
		cout<<"No! the third string is not the valid shuffle of the two strings";
}
