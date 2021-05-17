#include<bits/stdc++.h>
using namespace std;

int divide(int a,int b){
	if(b==0){
		throw "Division by 0 condition!";
	}
	return (a/b);
}

int main(){
	int a =1;
	int b=0;
	try{
		int ans= divide(a,b);
		cout<<ans;
	}
	catch(const char* msg){
		cout<<msg<<endl;
	}
}
