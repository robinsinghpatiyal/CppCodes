#include<iostream>
using namespace std;

//declating the funtion to check if its prime or not
void check(int a); //keeping it void beacause we will not return anything 

//defining the function check()
void check(int a){
	int count =0;
	
	//if the number is 0 or 1 then it's neither prime nor composite
	if(a == 0 || a== 1){
		cout<<"The number is neither prime not composite"<<endl;
		count++;
	}
	//checking for other positive numbers
	else{
		for(int i =2;i<=a/2;i++){
			if(a%i==0){
				cout<<"The number is not prime"<<endl;
				//breaking the loop after updating count
				count++;
				break;
			}
		}
	}
	//if count is = 0 then it means that it is not divided by any value
	if(count == 0){
		cout<<"The number is prime"<<endl;
	}
		
}

//defining the main funtion
int main(){
	int a;
	cout<<"Enter any postive number to check or -1 to quit: ";
	cin>>a; //this will keep taking inputs as long as user wants to
	//this will take the inputs
	while(a!=-1){
		//checking if a is less than -1
		if(a<-1){
			cout<<"Enter valid number: ";
		}
		else{
			check(a);
			cout<<"Enter any postive number to check or -1 to quit: ";
		}
		cin>>a; //this will keep taking inputs as long as user wants to
	}
	return 0;
}
