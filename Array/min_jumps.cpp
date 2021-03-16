#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int a=0,b=0,count=0;  // 1 3 5 8 9 2 6 7 6 8 9
	
	int i =0;
	
	while(i<n-1){
		b=arr[i];		
		i=i+b;
		count++;
	}
	
	cout<<count;  //1 2 4 2 2 1 5
}

/*

i   value	count   
0   1		1




*/
