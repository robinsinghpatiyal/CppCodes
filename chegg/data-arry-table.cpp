#include<bits/stdc++.h>
#define n 20    //difining the variable n = 20 so that we need not to initialize it again and again
using namespace std;

int main(){
	//initializing 5 arrays of size 20 max to store the data
	string name[n];
	int feet[n];
	int inches[n];
	float cm[n];
	float met[n];
	
	int size =0; // will use it to store the current size of used array
	
	int i = 0;
	//starting while loop to take 20 inputs if the user does not terminates it himself 
	while(i<20){
		int inch;
		float cms;
		float mtrs;
		
		string str;
		cout<<"Enter first name (type xxx when finished): ";
		getline(cin>>ws,str); //getline () is used to take input by considering whitespaces as characters and store it in str variable
		if(str=="xxx"){			//terminates the while loop if xxx is encountered
			break;
		}
		else{
			name[i] = str; 	// adds name in the name array
		}
		
		cout<<"Enter feet: ";
		cin>>feet[i];		//takes feet as input in feet array at location i
		
		cout<<"Enter inches: ";
		cin>>inches[i];		//takes inches in inches array at location i
		
		inch = (feet[i]*12) + inches[i]; //converting each feet value to inch and then adding user inputed inch value
		cms = (float)inch*(float)2.54;					// calculating cm from total inch value
		cout<<cms<<endl;
		cm[i] = cms;				// putting that value at index i of cm array.
		
		mtrs = cms/100;    	// calculating meters from cms
		
		met[i] = mtrs;		// putting that value at index i of met array.
		
		size = i + 1; 	// ie for first iteration size if 0+1 = 1
		i++;
	}
	
	// we will use setw() to format the input to our desired place
	// setw() allots the size for a givenoutput based on the agument passes
	cout<<setw(20)<<"Name"<<setw(7)<<"Feet"<<setw(7)<<"Inches" <<setw(15)<<"Centimeters"<<setw(8)<<"Meters"<<endl;
	cout<<setw(20)<<"******************"<<setw(7)<<"*****"<<setw(7)<<"*****" <<setw(15)<<"*************"<<setw(8)<<"******"<<endl;
	for(int i =0; i< size;i++){
		cout<<setw(20)<<name[i]<<setw(7)<<feet[i]<<setw(7)<<inches[i]<<setw(15)<<cm[i]<<setw(8)<<met[i]<<endl;
	}
	
}

/*
Tuffy Titan
7
6
Buzz Lightyear
0
11
Donald Duck
3
0
Elsa
5
7
Ariel
5
4
Lilo
3
5
xxx
*/
