#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int n =a;
	int rev=0;
	
	while(a>0){
		int b = a%10;
		rev = (rev*10)+b;
		a=a/10;
	}
	if(rev==n){
		cout<<"IT IS PALINDROME"<<endl;
	}
	else{
		cout<<"NOT A PALINDROME"<<endl;
	}
	
}
