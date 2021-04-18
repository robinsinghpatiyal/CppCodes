#include<iostream>
//including iostream or iostream.h
using namespace std;

//funtion declarations
float sum(float a, float b);
float diff(float a, float b);
float mul(float a, float b);
float div(float a, float b);

void disp(float a, float b, char s, float out);

//function definitions
//for sum
float sum(float a, float b){
	return a+b;
}

//for subtraction
float diff(float a, float b){
	return a-b;
}

//for multiplication
float mul(float a, float b){
	return a*b;
}

//for division
float div(float a, float b){
	return a/b;
}

//print funtion
//it is of void type because we are not returning anything
void disp(float a, float b, char s, float out){
	cout<<a<<" "<<s<<" "<<b<<" = "<<out;
}

//funtion to take the input of two numbers and driver funtion
int main(){
	cout<<"Enter the two numbers: ";
	float a,b;
	cin>>a>>b;
	cout<<"Enter:\n+ for Addition\n- for Subtraction\n * for Multiplication\n/ for Division"<<endl;
	char s;
	cin>>s;
	float out;
	//using switch case to itreate through input
	while(s!='!'){
		switch(s){
			//for addition
			case '+':
				out = sum(a,b);
				disp(a,b,s,out);
				break;
			//for subtraction
			case '-':
				out = diff(a,b);	
				disp(a,b,s,out);
				break;
			//multiplication
			case '*':
				out = mul(a,b);	
				disp(a,b,s,out);
				break;
			//division
			case '/':
				out = div(a,b);	
				disp(a,b,s,out);
				break;
			case'!':
				continue;
			default:
				cout<<"Wrong Input!";
		}
	cout<<endl<<"-------------------------------------"<<endl;
	cout<<"Enter the two numbers: ";
	cin>>a>>b;
	cout<<"Enter:\n+ for Addition\n- for Subtraction\n * for Multiplication\n/ for Division\n! to quit"<<endl;
	cin>> s;
 	}
	return 0;
}
