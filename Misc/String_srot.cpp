#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	cin>>n;
	cin>>s;
	
	int count=0;
	int max=0;
	char c;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			
			if(s[i] == s[j]){
				count++;
			}
		}
		if(count>max){
			max = count;
			c = s[i];
		}
		count =0;
	}

	
	s.erase(remove(s.begin(), s.end(), c),s.end());

	cout<<s;
}
