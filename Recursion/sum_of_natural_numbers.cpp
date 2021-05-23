#include<bits/stdc++.h>
using namespace std;

int findSum(int n){
	if(n!=0){
		return n + findSum(n-1);
	}
	return 0;
}

int main(){
	int n = 5;
	int sum = findSum(n);
	cout<<sum;
}
