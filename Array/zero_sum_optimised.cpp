#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {4, 2, 0, 1, 6};
	unordered_set<int> sumset;
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	int count= 0;
	for(int i=0;i<n;i++){
		sum = arr[i]+sum;
		
		if(sum = 0 || sumset.find(sum)!=sumset.end()){
			cout<<"YES";
			count = 1;
		}
		sumset.insert(sum);
	}
	if(count==0)
	cout<<"NO";
}
