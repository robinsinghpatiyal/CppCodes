#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5][5]={ 
                      { 1, 2, -1, -4, -20 }, 
                      { -8, -3, 4, 2, 1 }, 
                      { 3, 8, 6, 1, 3 }, 
                      { -4, -1, 1, 7, -6 }, 
                      { 0, -4, 10, -5, 1 } 
                    }; 
    int n =5;
    /*
	arr[i][j]=1;
	-20 = arr[j][n-i-1]
	1 = arr[n-i-1][n-j-1]
	0 = arr[n-j-1][i]	
	*/
	
	for(int i=0;i<n/2;i++){
		for(int j=i;j<n-1-i;j++){
			int temp = arr[i][j];
			arr[i][j] = arr[n-j-1][i];
			arr[n-j-1][i] = arr[n-i-1][n-j-1];
			arr[n-i-1][n-j-1] = arr[j][n-i-1];
			arr[j][n-i-1] = temp;
		}
	}
	
	for(int i =0; i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
