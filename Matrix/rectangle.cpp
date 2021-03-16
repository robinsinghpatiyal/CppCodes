#include<bits/stdc++.h>
using namespace std;

/*
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
*/

int main(){
	int arr[][4]= {{0, 1, 1, 0},
         {1, 1, 1, 1},
         {1, 1, 1, 1},
         {1, 1, 0, 0}};
	int r = sizeof(arr)/sizeof(arr[0]);
	//int c = sizeof(arr[0]/sizeof(arr[0][0]));
	
	int r1=0;
	int r2=0;
	int sum = 4;
	int c =4;
	int rectangle =0;
	int rect =0;
	int rect1=1;
	while(r1<r-1){
		int cur =0;
		int cur1 = 0;
		for(int i=0;i<c;i++){
			cur = arr[r1][i]+cur;
		}
		for(int i=0;i<c;i++){
			cur1 = arr[r1+1][i]+cur1;
		}
		
		if( cur == sum && cur1 == sum){
			rect1 = rect1+1;
			
		}
		if(cur == sum && cur1 !=sum){
			rect = 1;
			r1++;
		}
		r1++;
		rectangle=max(rect1,rect);
	}
	cout<<rectangle*4;
}
