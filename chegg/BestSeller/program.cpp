#include<bits/stdc++.h> //including the standard template library
using namespace std;

//writing main funtion where we will read and display the output
int main(){
	ifstream ifile("bestsellersalt.txt"); //opening file in read only mode to display the data
	
	if(ifile){ //checking if file exits or not. If yes then perfomr the operations

		while(!ifile.eof()){ //looping till the end of file	
			
			string d;			// string that will store the data temporarily
			getline(ifile,d,'\t'); //reading the contents of file based onthe tabs
			cout<<d<<endl;        //printing out the data stored in the sring d
			
		}
	}
	else{
		cout<<"File does not exist. Please check the name!"; //if the file does not exist
	}
	
	ifile.close();        //closing the file
	
	return 0;
}
