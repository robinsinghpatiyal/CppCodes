#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	cin>>n;
	int cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		if(c==1){
			cnt1++;
		}
		else
			cnt2++;
	}
	
	if((cnt1+2*cnt2)%2!=0){
		cout<<"NO"<<endl;
	}
	else{
		int sum = (cnt1+2*cnt2)/2;
		if(sum%2==0 || (sum%2==1 && cnt1!=0)){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solution();
	}
}
