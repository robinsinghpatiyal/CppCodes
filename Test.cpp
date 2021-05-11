#include<bits/stdc++.h>
using namespace std;

int main(){
	float alpha[10][5];
	int count =1;
	for(int i=0;i<10;i++){
		for(int j=0;j<5;j++){
			alpha[i][j]=count;
			count++;
		}
	}
	cout<<count;
	for(int i=0;i<10;i++){
		for(int j=0;j<5;j++){
			cout<<alpha[i][j];
		}
		
	}
}
