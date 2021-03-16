#include<bits/stdc++.h>
using namespace std;

int main(){
	char c[100];
	cin>>c;
	string out = "NO";
	
	int len = strlen(c);
	
	for(int i =0; i<len;i++){
		if(i<=len-7){
			if(c[i]==c[i+1] && c[i]==c[i+2] && c[i]==c[i+3] && c[i]==c[i+4] && c[i]==c[i+5] && c[i]==c[i+6]){
				out="YES";
				break;
			}
			else
			out="NO";
		}
	}
	cout<<out;
}
