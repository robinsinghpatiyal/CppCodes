#include<bits/stdc++.h>
using namespace std;

struct Date{
	int month;
	int day;
	int year;
};

bool isDateValid(struct Date *today){
	if(today->day<1 || today->month>12){ //while passing by reference we use object->member to access the member of structure at that address
		return false;
	}
	else if(today->day<1 || today->day>30){
		return false;
	}
	else if(today->year<2020){
		return false;
	}
	return true;
}

void getDate(struct Date *today){
	bool validInput = false;
	while(validInput != true){
		cout<<"Enter today’s date in the following order: \nMM/DD/YYYY, (Month, Day, Year)"<<endl;
		cout<<"Month: ";
		cin>>today->month;
		cout<<"Day: ";
		cin>>today->day;
		cout<<"Year: ";
		cin>>today->year;
		validInput = isDateValid(today); //passing object with values of date month and year to check if they are valid
		if(validInput == false){
			cout<<"Invalid date"<<endl;
		}
	}
}

void addOneDay(struct Date *today){
	if(today->day==30 && today->month<12){
		today->month++;
		today->day=1;
	}
	else if(today->day==30 && today->month==12){
		today->year++;
		today->day=1;
		today->month=1;
	}
	else if(today->day<30 && today->month<12){
		today->day++;
	}
}

void displayTommorow(struct Date *today){
	cout.fill('0');
	cout<<"After adding one day to today’s date, tomorrow’s date is: ";
	cout<<setw(2)<<today->month<<"/"<<setw(2)<<today->day<<"/"<<setw(4)<<today->year<<endl;
}

int main(){
	char loop = 'y';
	
	while(loop=='y'||loop=='Y'){ //true for both y and Y
	
		struct Date today;
		
		getDate(&today); //passing object to getDate as refrence
	
		addOneDay(&today); //passing object with valid date for incrementing
	
		displayTommorow(&today); //passing object to display the date
		
		cout<<"Do it again? (Y/N) ";
		cin>>loop;
	
	}
	
}
