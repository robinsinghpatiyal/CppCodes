#include<iostream>
using namespace std;

//declaring input fucntion
int input(int a);

//defining input function which will recursively call itself until a valid input is entered
int input(int a){
	cout<<"Input: ";
	cin>>a;
	if(a<3 || a%2==0){
		cout<<"Please try again!"<<endl;
		input(a);						// will call itself and take input if valid value is not entered
	}
	else{
		return a;				// will return a valid input
	}
}

//main function
int main(){
	int a = 0;		//a is the variable which will store the input and we are assignig it to 0. You can assing to anything
	
	a = input(a);	//calling the recursive function input to take valid input
	
	//now we will use two while loops to draw the figure
	//we will be using two while loops because its a matrix or a 2D array
	int loop =a;
	
	cout<<"Output: "<<endl; 	//you can remove endl if you does not want new line after output:
	while(loop>0){
		int b = a;
		while(b>0){
			cout<<'X';
			b--;
		}
		cout<<endl;
		loop--;
	}
	
}
