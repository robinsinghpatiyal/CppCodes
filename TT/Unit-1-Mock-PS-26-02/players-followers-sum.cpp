#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c,k;
	cout<<"Enter the number of Players, Followers and Sum:";
	cin>>r>>c>>k;
	bool arr[r][c];
	cout<<endl<<"Enter the Followers data:"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	
	vector<int> vec;
	
	for(int i =0;i<r;i++){
		int sum =0;
		for(int j=0;j<c;j++){
			sum = sum + arr[i][j];
		}
		vec.push_back(sum);
	}
	
	sort(vec.begin(),vec.end());
	int flag=0;
	int count=0;
	int n = vec.size();
	n--;
	while(n>=0){
		if(vec[n]== k){
			count++;
			cout<<count;
			flag =1;
			break;
		}
		else if(vec[n]<k){
			count++;
			k = k-vec[n];
			n--;
		}
		else{
			n--;
		}
			
	}
	if(flag ==0){
		cout<<count;
	}
	
}
/*
1 1 1 1 0 0 0
0 0 0 1 0 0 0
0 0 0 0 1 0 0
0 0 0 0 0 1 0
1 0 0 0 0 0 0
0 1 0 0 0 0 0
0 0 1 0 0 0 0
1 1 0 0 0 0 0
0 0 1 1 0 0 0
0 0 0 0 1 1 0
0 0 0 0 1 1 0
*/
