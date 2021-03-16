#include<bits/stdc++.h>
using namespace std;

void solution(){
	int a,b,c;
	cin>>a>>b>>c;
	int count=1;
	
		while(a%2==0){
			count*=2;
			a=a/2;
		}

			while(b%2==0){
			count*=2;
			b=b/2;
		}
	if(count>=c || c==1){
		cout<<"YES";
	}
	else
		cout<<"NO";
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solution();
		cout<<endl;
	}
}
