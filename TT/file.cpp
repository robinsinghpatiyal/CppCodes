#include<bits/stdc++.h>
using namespace std;

void file(int n, string d){ //funtion to create file!
	ofstream oFile;
	oFile.open("one.txt");
	
	for(int i =0;i<n;i++){
		getline(cin>>ws, d);
		oFile<<d<<endl;
	}
	
	oFile.close();
}

int main(){
	string d;
	cout<<"Enter the number of lines you want to add"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the lines into the files using Enter as a new line: "<<endl;
	
	file(n,d); //Creates files with n number of lines !

	ifstream iFile;
	iFile.open("one.txt");
	
	vector<string> vec;
	
	for(int i =0;i<n;i++) 		//adding the contents of the file to a vector so that we can print it!
	{
		getline(iFile, d);
		vec.push_back(d);
	}
	iFile.close();
	
	cout<<endl;
	
	cout<<"Enter the number of Lines you want to print from end"<<endl;
	int l;
	cin>>l;
	
	cout<<"The last "<<l<<" lines are :"<<endl;

	for(int i =n-l;i<n;i++){
		cout<<vec[i]<<endl;
	}
	return 0;

}

/*
5
My name is Robin Singh Patiyal
UID of Robin is 18BCS1058
UID 1058 is in K3 section
This program is of File printing
This line has the maximum chances of getting printed!
2
*/
