#include<bits/stdc++.h>
using namespace std;

int main(){
int r,c,x;
cin>>r>>c>>x;

int arr[r][c];
for(int i =0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>arr[i][j];
	}
}

int i =0; int j=c-1;

while(i<r && j>=0){
	if(arr[i][j]==x)	{
		cout<<"Found at "<<arr[i][j];
		break;
	}
	else if(arr[i][j]>x)
		j--;
	else
		i++;
}

}

