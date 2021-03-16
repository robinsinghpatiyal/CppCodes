#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target){
	int n = arr.size();
	auto s = *min_element(arr.begin(),arr.end());
	auto mid = find(arr.begin(),arr.end(),s);
	cout<<mid;
}

// [4,5,6,7,0,1,2]

int main(){
	vector<int> arr = {4,5,6,7,0,1,2};
	int target;
	cin>>target;
	int ans = search(arr,target);
}
