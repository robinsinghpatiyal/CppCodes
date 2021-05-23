#include<bits/stdc++.h>
using namespace std;

int main(){
	ofstream ofile("first.txt");
	
	for(int i=0;i<5;i++){
		
		int num;
		cin>>num;
		
		ofile<<num<<endl;
		
	}
	ofile.close();
	
	ifstream ifile("first.txt");
	
	for(int i=0;i<5;i++){
		string num;
		getline(ifile,num);
		cout<<num<<"  ";
	}
	ifile.close();
	
}
