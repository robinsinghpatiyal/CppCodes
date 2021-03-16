#include <bits/stdc++.h>
#define n 2
using namespace std;


bool matrix(int a[][n],int b[][n]){
	int i,j,k=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j] != b[i][j])
				return false;
		}
	}
	return true;
}



int main(){
	
	int a[n][n]={{1,2},{1,25}};
	int b[n][n]={{1,2},{1,2}};
	
	if(matrix(a,b)== true){
		cout<<"Equal"<<endl;
	}
	else{
		cout<<"Not Equal"<<endl;
	}
	
}
