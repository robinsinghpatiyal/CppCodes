#include<bits/stdc++.h>
using namespace std;

void sol( vector<vector<int>> &a, int r, int c, int k){
	int r0 = 0;
	int c0 = 0;
	vector<int> b;
	//cout<<a.size()<<" "<<a[0].size();
	
	while(r0<r && c0<c)
	{
	for(int i  = c0; i<c; i++){
		b.push_back(a[r0][i]);
	}
	r0++;
	
	for(int i = r0; i<r; i++){
		b.push_back(a[i][c-1]);
	}
	c--;
	
	while(r0<r){
	for(int i = c-1; i>c0;i--){
		b.push_back(a[r-1][i]);
	}
	r--;
	while(c0<c){
	for(int i = r-1; i>=r0; i--){
		b.push_back(a[i][c0]);
	}
	c0++;
	}
	}
	
		}// while

	cout<<b[k-1];
//return 0;
	
}

int main(){
	vector<vector<int>> a = {{1, 2, 3}, 
       						{4, 5, 6}, 
       						{7, 8, 9}};
    int n = a.size();
    int m = a[0].size();
    int k = 4;
    sol(a,n,m,k);
    //cout<<n<<" "<<m;
    //cout<<ans;
}
