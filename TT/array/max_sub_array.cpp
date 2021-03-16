#include<bits/stdc++.h>
using namespace std;
void sol(int arr[],int n){
	int max_so_far = INT_MIN;
	int max_till_here = 0;
	int start =0,int end =0; int s=0;
	
	for(int i =0;i<n;i++){
		max_till_here += arr[i];
		if(max_so_far < max_till_here){
			max_so_far = max_till_here;
			start = s;
			end = i;
		}
		if(max_till_here < 0){
			max_till_here = 0;
			s = i+1
		}
	}
	cout<<s<<" "<<end;
}

int main(){
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    sol(a, n);
    return 0;
}
