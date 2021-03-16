#include<bits/stdc++.h>
using namespace std;

int main(){
	int k ;
	cin>>k;
	int n=4;
	int n1=n*n;
	int arr[4][4]={{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }};
                   
    int ar[n1];
    int index=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		ar[index]=arr[i][j];
    		index++;
		}
	}
	
	sort(ar,ar+n1);
	
	cout<<ar[k-1];
}
