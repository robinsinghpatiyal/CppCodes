#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Enter the size of array 1 and array 2 respectively: "<<endl;
	cin>>n1>>n2;
	
	int arr1[n1],arr2[n2];
	
	for(int i=0; i<n1; i++){
		cin>>arr1[i];
	}
	
	for(int i =0;i<n2;i++){
		cin>>arr2[i];
	}
	
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	n1--;
	n2--;
	int count =0;
	
	while(n1 >=0 && n2 >=0){
		if(arr1[n1]==arr2[n2]){
			cout<<"The greatest common integer is "<<arr1[n1];
			count =1;
			break;
		}
		else if(arr1[n1]>arr2[n2]){
			n1--;
		}
		else{
			n2--;
		}
	}
	if(count ==0){
		cout<<"No common integer in two arrays.";
	}
	
}
