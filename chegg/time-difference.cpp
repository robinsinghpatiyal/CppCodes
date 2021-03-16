#include<bits/stdc++.h>
using namespace std;
const int MINUTES_IN_HOUR = 60;
const int MINUTES_IN_DAY = 24 * MINUTES_IN_HOUR;

int compute_difference(int a, int b, char c, int a1, int b1, char c1);
int ConvertTimeToMinutes(int hour, int min, char pm);
//separate function to do the time conversion, to cut down on duplicated code

int ConvertTimeToMinutes(int hour, int min, char pm)
{
    if (hour == 12){ // if hour is 12 then make it 0 to make calulation easier
        hour = 0;
    }
    int calc = hour*60 + min;
    
    if (pm == 'p'){
        calc += 12*60;
    }
    return calc;
}

int compute_difference(int hour1, int min1, char one, int hour2, int min2, char two){
	
	int calc1 = ConvertTimeToMinutes(hour1, min1, one);
    int calc2 = ConvertTimeToMinutes(hour2, min2, two);
    if (calc2 > calc1)
    {
        return calc2 - calc1;
    }
    else
    {
        return calc1 - calc2;
    }
	
}

int main(){
	int hrs,mins,hrs1,mins1;
	char one,two;
	char loop = 'y';  //for running the while loop
	while(loop == 'y'||loop =='Y'){
			//taking start time
			cout<<"Enter start time, in the format 'HH:MM xm', where 'xm' is either 'a' or 'p' for AM or PM:"<<endl;
			cout<<"Enter starting hours: ";
			cin>>hrs;
			cout<<"Enter starting minutes: ";
			cin>>mins;
			cout<<"Is it AM Or PM? (a for AM and p for PM): ";
			cin>>one;
			//taking end time
			cout<<"Enter ending time, in the format 'HH:MM xm', where 'xm' is either 'a' or 'p' for AM or PM:"<<endl;
			cout<<"Enter ending hours: ";
			cin>>hrs1;
			cout<<"Enter ending minutes: ";
			cin>>mins1;
			cout<<"Is it AM Or PM? (a for AM and p for PM): ";
			cin>>two;
			
		int out = compute_difference(hrs, mins, one, hrs1, mins1, two);
		
		int hrsDiff = out/MINUTES_IN_HOUR; //finding the hour difference by dividin hours by 60
		
		int minDiff = out%MINUTES_IN_HOUR; //finding the minutes diffrence by modulo operation
		string out1, out2;
		//for output purpose
		if(one=='a'){
			out1 ="AM";
		}
		else if(one == 'p'){
			out1 = "PM";
		}
		
		if(two=='a'){
			out2 ="AM";
		}
		else if(two == 'p'){
			out2 = "PM";
		}
		cout.fill('0'); //fill the empty space with 0 ie 1 becomes 01
		//set2(2) is used to set precision =2
		cout<<endl;
		cout<<"There are "<<out<<" minutes ("<<hrsDiff<<" hours and "<<setw(2)<<minDiff<<" minute) between "<<setw(2)<<hrs<<":"<<setw(2)<<mins<<" "<<out1<<" and "<<setw(2)<<hrs1<<":"<<setw(2)<<mins1<<" "<<out2;
		cout<<endl<<endl<<"Run another session? (y/n): ";
		cin>>loop;
		cout<<endl<<endl;
	}
	return 0;
}

