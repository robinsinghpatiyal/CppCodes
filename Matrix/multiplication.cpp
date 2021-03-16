#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3][3] = { {2, 4, 1} , {2, 3, 9} , {3, 1, 8} };
   int b[3][3] = { {1, 2, 3} , {3, 6, 1} , {2, 4, 7} };
   int r1=3,r2=3,c1=3,c2=3;
   int arr[r1][c2]={0};
   
   if(r2!=c1){
   	cout<<"Product can not be found"<<endl;
   }
   else
   for(int i =0;i<r1;i++){
   	for(int j=0;j<c2;j++){
   		for(int k=0;k<c1;k++){
   			arr[i][j]=arr[i][j]+(a[i][k]*b[k][j]);
		   }
	   }
   }
   
   for(int i=0;i<r1;i++){
   	for(int j=0;j<c2;j++){
   		cout<<arr[i][j]<<" ";
	   }
	   cout<<endl;
   }
}
