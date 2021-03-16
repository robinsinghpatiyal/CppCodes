#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 0; //using it for iterating over while loop
	float sum =0;
	while(a!=-1){			//a will also store the quantity and will exit the loop when -1 is encounterd
		int quant;
		cout<<"Enter the item number & Quantity: ";
		cin>>a>>quant;		
		if(a==1){
			sum+=quant*2.99;
		}
		else if(a==2){
			sum+=quant*4.5;
		}
		else if(a==3){
			sum+=quant*9.99;
		}
		else if(a==4){
			sum+=quant*3.0;
		}
		else if(a==5){
			sum+=quant*6.0;
		}
		else{
			cout<<"The value of the item is out of range"<<endl;
		}
	}
	cout<<"Total bill is "<<sum;
	return 0;
}
