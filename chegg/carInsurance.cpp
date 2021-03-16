#include<bits/stdc++.h>
using namespace std;

//for input
void input(float *cv, int *age, char *sex,int *numTic){
	cout<<"Enter the value of the car: ";
	cin>>*cv;
	cout<<"Enter the age of the driver: ";
	cin>>*age;
	cout<<"Enter the sex of the driver (M or F): ";
	cin>>*sex;
	cout<<"Enter the number of tickets on the drivers record: ";
	cin>>*numTic;
}

//calculates the insurance
float calc(float carValue, int age, char sex, int numOfTickets){
	float insurance;
	float basic = (float)0.06 * carValue;
		float extra = 0.00;
		
		if((sex == 'M'|| sex =='m')&& age<25){	//checks for both m and M and under 25 typecasting not required
			extra = (float)0.17 * carValue;
		}
		else if((sex =='F'||sex =='f')&& age<21){	//checks for both f and F typecasting not required
			extra = (float)0.04 * carValue;
		}
		insurance = basic + extra;
		
		if(numOfTickets>3){
			insurance += 100;
		}
	return insurance;	
}


int main(){
	float carValue;
	int age,numOfTickets;
	char sex;
	float insurance;
	char loop = 'Y';
	
	while(loop=='Y'||loop=='y'){
		input(&carValue,&age,&sex,&numOfTickets); //passing by reference so that the value at the address gets updated
	
		insurance = calc(carValue, age, sex, numOfTickets);
		cout<<"The insurance rate is $"<< fixed <<setprecision(2)<<insurance<<endl;
		cout<<"Would you like to run the program again (Y or N)? ";
		cin>>loop;
	}
	return 0;
}
