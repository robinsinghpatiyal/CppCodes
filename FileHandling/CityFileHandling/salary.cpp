#include<bits/stdc++.h> //including the standard template library
using namespace std;

//creating struct name EmployeeType

struct EmployeeType{
	int idNum;
	int hoursWorked;
	float hourlyPayRate;
	float taxRate;
	float grossPay;
	float netPay;
};
//struct is created

//creating main function to access the data of struct

int main(){
	int n;
	cout<<"Enter the number of employees: ";
	cin>>n; //will create n number of objects;
	
	//creating array of object for the EmployeeType struct
	struct EmployeeType obj[n];
	//opening the file to store the data
	
	for(int i=0;i<n;i++){
		//taking input from the user
		
		cout<<"Enter the Employee ID: ";
		cin>>obj[i].idNum;
		cout<<"Enter Hours Worked: ";
		cin>>obj[i].hoursWorked;
		cout<<"Enter Hourly Pay Rate: ";
		cin>>obj[i].hourlyPayRate;
		cout<<"Enter Tax Rate: ";
		cin>>obj[i].taxRate;
		
		obj[i].grossPay = obj[i].hourlyPayRate * (float)obj[i].hoursWorked;//calculating grosspay by typecating hours worked from int to float
		float tax = (obj[i].taxRate/(float)100)*obj[i].grossPay;
		obj[i].netPay = obj[i].grossPay - tax;
		
		
	}

	
	//opening file to show the output in read only mode
	cout<<"ID"<<setw(17)<<"Hours Worked"<<setw(17)<<"hourly Rate"<<setw(15)<<"Tax Rate"<<setw(17)<<"Gross Pay"<<setw(20)<<"NetPay"<<endl; //setw() helps us to write data neetly by adding user inputed amount of spaces
	for(int i=0;i<n;i++){																	 // if standard library is out of your scope then you can ignore this function and wirte data with setw()
		cout<<obj[i].idNum<<setw(17)<<obj[i].hoursWorked<<setw(17)<<obj[i].hourlyPayRate<<setw(15)<<obj[i].taxRate<<"$"<<setw(15)<<obj[i].grossPay<<setw(15)<<"$"<<obj[i].netPay<<endl; //this willprint all the data stored in array of objects
	}
	
	//optional if you want to wrte data to file named data.txt
	ofstream ofile("data.txt");
	ofile<<"ID"<<setw(17)<<"Hours Worked"<<setw(17)<<"hourly Rate"<<setw(15)<<"Tax Rate"<<setw(17)<<"Gross Pay"<<setw(20)<<"NetPay"<<endl;
	for(int i=0;i<n;i++){																	 
		ofile<<obj[i].idNum<<setw(17)<<obj[i].hoursWorked<<setw(17)<<obj[i].hourlyPayRate<<setw(15)<<obj[i].taxRate<<"$"<<setw(15)<<obj[i].grossPay<<setw(15)<<"$"<<obj[i].netPay<<endl; //this will write all the data stored in array of objects into the file
	}
	ofile.close();
	return 0;
}
/*
Test cases

5
1086
40
6.50
10
1125
35
12.00
15
2344
40
66.00
28
9972
60
45.00
28
3446
20
9.75
10
*/
