#include<bits/stdc++.h>

using namespace std;

int main(){

int arr[]={1, 4, 2, 10, 2, 3, 1, 0, 20 };
int n = sizeof(arr)/sizeof(arr[0]);

int k = 4;
int sum = 0;

for(int i=0;i<k;i++){
	sum = sum+arr[i];
}
int max_sum= sum;

for(int i=k;i<n;i++){
	sum = sum+arr[i]-arr[i-k];
	max_sum = max(sum,max_sum);
}
cout<<max_sum;
}
