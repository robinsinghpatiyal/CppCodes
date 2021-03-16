#include<bits/stdc++.h>
using namespace std;

int sol(int height[],int n){
	int a = 0;
	int area = 0;
	while(a<n){
	for(int i =0; i<n; i++){
		int dist = i-a;
		if(dist == 0){
			i++;
			dist = 1;
		}
			dist = dist - 1;
			
		int mini = min(height[a],height[i]);
		int ar = mini* dist;
		area = max(ar, area);
	}
	a++;
}
	return area;
	
}

int main()
{
	int arr[] = {2, 1, 3, 4, 6, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = sol(arr,n);
	cout<<ans;
}
