#include<iostream>
using namespace std;

int main(){
	//declaring 5 float variables
	float a, b, c, d, e;
	cout<<"Please enter 5 floating values whose sum you want to find:"<<endl;
	//taking input in 5 float varibles in one go
	cin>>a>>b>>c>>d>>e;
	//storing sum in sum varible of float datatype
	float sum = a+b+c+d+e;
	cout<<"The sum is : "<<sum<<endl<<endl;
	
	//declaring 5 int variables
	int v , w, x, y, z;
	cout<<"Please enter 5 integer values to find the minimum: "<<endl;
	//taking input in 5 int varibles in one go
	cin>>v>>w>>x>>y>>z;
	//storing the minum value in min int type variable
	//we are using less than equal to (<=) operator to overcome the problem when we will have duplicate values
	int min;
	if(v<=w && v<=x && v<=y && v<=z){
		min = v;
	}
	else if(w<=x && w<=y && w<=z && w<=v){
		min = w;
	}
	else if(x<=y && x<=z && x<=v && x<=w){
		min = x;
	}
	else if(y<=z && y<=v && y<=w && y<=x){
		min = y;
	}
	else{
		min = z;
	}
	cout<<"The minimum is :"<<min<<endl<<endl;
	
	//two int type variables to find raise to the power 
	int n,m;
	cout<<"Enter the values of n and m respectively:"<<endl;
	cin>>n>>m;
	
	//we will use while loop to find n to power m and sotre it in result variable of flaot type
	int result;
	//loop will run until the value of m become 0
	while(m!=0){
		result*=n; //can also be written as result = result * base
		m--;
	}
	
	cout<<"n to power m is: "<<result<<endl;
	
	
}
