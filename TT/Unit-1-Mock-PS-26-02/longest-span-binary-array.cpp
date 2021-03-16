#include<bits/stdc++.h> 
using namespace std; 

int find_index(bool ar1[], bool ar2[], int n) 
{ 
    int len = 0; 
    int one, two;
    for (int i=0; i<n; i++) 
    { 
       int s1 = 0, s2 = 0; 
       for (int j=i; j<n; j++) 
       { 
           s1 += ar1[j]; 
           s2 += ar2[j]; 
           if (s1 == s2) 
           { 
             int l = j-i+1; 
             if (l > len) 
                one = i;
				two = j; 
           } 
       } 
    } 
    cout<<one<<" "<<two; 
} 
int main() 
{ 
	int N;
	cout<<"Enter the size of array: "<<endl;
	cin>>N;
    bool arr1[N];
	bool arr2[N];
	for(int i =0;i<N;i++){
		cin>>arr1[i];
	}
	for(int i =0;i<N;i++){
		cin>>arr2[i];
	}
	find_index(arr1, arr2, N); 
    return 0; 
} 
