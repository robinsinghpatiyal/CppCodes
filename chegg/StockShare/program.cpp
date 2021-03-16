#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream fin("STOCKS.dat", ios::in); 

    ofstream fout("PROFITS.dat", ios::out); 
    
	vector<string> vec;
	int count =1;
	string line;
	int n=3;
	while(fin){
		if(n==3){

			getline(fin,line);
			cout<<line<<endl;
			fout<<line<<endl;	
		}
			int n=0;
			
		while(n<3){
			fin>>line;
			cout<<line<<endl;
			fout<<line<<endl;
			n++;
	}		
		
	}
	fin.close();
	fout.close();
}
