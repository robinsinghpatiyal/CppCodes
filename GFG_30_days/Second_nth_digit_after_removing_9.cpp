#include<bits/stdc++.h>
using namespace std;

int sol(int n){
	int dig =0;
	int mul = 1;
	int ans = 0;
	while(n!=0){
		dig = n%9;
		n = n/9;
		ans = (dig*mul)+ans;
		mul = mul*10;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	int ans = sol(n);
	cout<<ans;
}
