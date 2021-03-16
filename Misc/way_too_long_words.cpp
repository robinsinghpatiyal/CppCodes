#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, len;
	char c[100];
	cin>>n;	
	
	for(int i =0; i<n; i++){
		cin>>c;
		len = strlen(c);
		if(len<=10)
		cout<<c<<endl; 
		else
		cout<<c[0]<<len-2<<c[len-1]<<endl;
		
	}
	
}
