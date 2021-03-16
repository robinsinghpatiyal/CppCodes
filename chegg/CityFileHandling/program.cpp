#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of cities:";
	cin>>n;				//n number of cities to be added in the file
	
	ofstream oFile;		//oFile to wirte data into the file
	oFile.open("data.txt"); //opening file named data.txt if it exists and if not then creating file
	
	for(int i=0;i<n;i++){
		vector<string>vec;	// vector v will take input as [city,population,mayor]
		
		cout<<endl<<"Enter Name of City, Population, and Name of Mayor:"<<endl;
		for(int j=0; j<3;j++){	//loop will run 3 times so that 3 inputs can be stored in vector
			string s;
			cin>>s;
			vec.push_back(s);
		}
		
		for(auto k = vec.begin();k!=vec.end();k++){
			oFile<<*k<<" ";					//writing the data of vector into the file
		}
		oFile<<endl;						//adding new line after every new entry
	}
	oFile.close();							//closing file
	
	ifstream iFile;							//iFile to read data from file
	iFile.open("data.txt");					//opening file
	
	vector<string> vec2;					//vec2 will store data of full file as [city popuplation mayor, city popuplation mayor, city popuplation mayor]
	
	string d;	//string d will read teh data and push it in vector
	for(int i =0;i<n;i++) 		//adding the contents of the file to a vector so that we can sort it!
	{
		getline(iFile, d);		//getline function is used here to identify the spaces as chars 
		vec2.push_back(d);
	}
	iFile.close();   
	
	sort(vec2.begin(), vec2.end()); //sorting the vector 2
	
	oFile.open("data.txt");     	//again opening file to insert the sorted data or you can also store data in differnt file by changing name here
	
	for(auto i = vec2.begin();i!=vec2.end();i++){
			oFile<<*i<<endl;			//writing the contents of sorted vector vec2 to file 
		}
	
	cout<<endl;	
	cout<<"The sorted data is: "<<endl;
	
	for(auto i = vec2.begin();i!=vec2.end();i++){
		cout<<*i<<endl;					//pritning the sorted contents of file
	}
	oFile.close();						//closing the file finally
	
	return 0;
}
