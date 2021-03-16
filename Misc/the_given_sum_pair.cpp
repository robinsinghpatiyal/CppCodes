#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,inp;
	cin>>n;
	cin>>inp;
	int count=0;
	vector<int> arr;
	
	for(int i=0;i<n;i++){
		cin>>a;
		arr.push_back(a);
	}
	
	for(auto i = arr.begin();i < arr.end()-1; i++){   //1, 5, 7, 1
		for( auto j = i+1 ;j<arr.end();j++){
			if(*i+*j==inp){
				count++;
			}
		}
	}
	cout<<count;
}
