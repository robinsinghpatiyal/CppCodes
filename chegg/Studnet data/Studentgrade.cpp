#include<bits/stdc++.h> //including the standard template library
using namespace std;

//creating struct name student

struct Student{
	int idNum;
	double creditPts;
	int creditHours;
	double gpa;
};
//struct is created

//creating main function to access the data of struct

int main(){
	int n;
	cout<<"Enter the number of students: ";
	cin>>n; //will create n number of objects;
	//creating object for the student struct
	struct Student obj;
	//opening the file to store the data
	ofstream ofile("student.txt");

	for(int i=0;i<n;i++){
		//taking input from the user
		
		cout<<"Enter the Student ID: ";
		cin>>obj.idNum;
		cout<<"Enter Credits Points: ";
		cin>>obj.creditPts;
		cout<<"Enter Credits Hours: ";
		cin>>obj.creditHours;
		
		obj.gpa = obj.creditPts/(float)obj.creditHours;//calculating gpa by typecating credit hours from int to float
		
		ofile<<obj.idNum<<setw(17)<<obj.creditPts<<setw(17)<<obj.creditHours<<setw(7)<<setprecision(2)<<obj.gpa<<endl; //this will wrtie data we entered to the file
	}
	ofile.close();
	
	//opening file to show the output in read only mode
	ifstream ifile("student.txt");
	cout<<"ID"<<setw(17)<<"Credit Points"<<setw(17)<<"Credit Hours"<<setw(7)<<"GPA"""<<endl; //setw() helps us to write data neetly by adding user inputed amount of spaces
	for(int i=0;i<n;i++){																	 // if standard library is out of your scope then you can ignore this function and wirte data with setw()
		string d;
		getline(ifile,d);	//reading the data into string and then showing it on screen. But if we have to perform operation on this data we will need ot type cast it
		cout<<d<<endl;
	}
	ifile.close();
}
/*
Test cases

5
101
35
12
102
45
13
103
20
5
104
25
10
105
30
14
*/
