#include<bits/stdc++.h>
using namespace std;

class EvenNumbers{
	public:
		int number;
		//default constructor
		EvenNumbers(){
			number = 0;
		}
		
		// parameterized constructor
		EvenNumbers(int num){
			number = num;
		}
		
		int getValue(){	
			return number;
		}
		
		int getNext(){
			number = number+2;		//incrementing to next even number
			return number;
		}
		
		int getPrevious(){
			if(number>=2){			//checking if number is 0 or not
				number = number-2;
			}
			else{
				number = 0;			//returning 0 so that program doesn't go in negative
			}
			return number;
		}
		
};

int main(){
	EvenNumbers cons;	//Object for default Constructor
	int a= cons.number;	//Calling number to make a = 0;
	int b;
	cout<<"Enter Even Number :";
	cin>>b;
	int count =0;
	
	//checking if both are even or not
	if(b%2==0){
		EvenNumbers c(a);     // Passing value of a to parameterised constructor
		while(a != b){
			a = c.getNext();  // incrementing till a == b
			EvenNumbers c(a); // passing the updated values
			count++;          // counting the number of iterations
		}
		
	}
	else{
		cout<<"Number entered are not Even Numbers! "; // if the entered number is not even
	}
	cout<<count<<endl;
}
