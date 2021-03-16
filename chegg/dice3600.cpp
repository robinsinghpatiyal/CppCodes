#include<bits/stdc++.h>
#define n 36000
using namespace std;
/*
float expect(int num){
	float x = (float)1/(float)36;
	
	float ways;
	float total;
	if(num==2){
		ways = (float)1 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
		
		return total*(float)100;
	}
	else if(num==3){
		ways = (float)2 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==4){
		ways = (float)3 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==5){
		ways = (float)4 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==6){
		ways = (float)5 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==7){
		ways = (float)6 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==8){
		ways = (float)5 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==9){
		ways = (float)4 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==10){
		ways = (float)3 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
	else if(num==11){
		ways = (float)2 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
		else if(num==12){
		ways = (float)1 * x;
		total = (float)ways/(float)n;
		return total*(float)100;
	}
}
*/
// returning the expected probabilty for each sum;
float expect(int num){
		if(num==2){
		return 2.778;
	}
	else if(num==3){
		return 5.556;
	}
	else if(num==4){
		return 8.333;
	}
	else if(num==5){
		return 11.111;
	}
	else if(num==6){
		return 13.889;
	}
	else if(num==7){
		return 16.667;
	}
	else if(num==8){
		return 13.889;
	}
	else if(num==9){
		return 11.111;
	}
	else if(num==10){
		return 8.333;
	}
	else if(num==11){
		return 5.556;
	}
	else if(num==12){
		return 2.778;
	}
}

int main(){
	int arr[n];
	
	for(int i=0;i<n;i++){
		int a = rand()%(6-1 + 1) + 1;
		int b = rand()%(6-1 + 1) + 1;
		arr[i] = a+b;
	}
	
	sort(arr,arr+n);
	int i=0;
	int count=0;
	cout<<"Sum"<<"    "<<"Total"<<"    "<<"Expected"<<"    "<<"Actual"<<endl;
	for(int num = 2;num<13;num++){	
		while(arr[i]==num){
			count++;
			i++;
		}
		float expected = expect(arr[i-1]); //getting expected value from the funtion
		float prcnt = ((float)count/(float)n)*(float)100;  //Finding actual value
		
		//(float)count is done so that each value is typecasted into float else it will give 0
		
		cout<<num<<"      "<<count<<"      "<<expected<<"% "<<"      "<< fixed <<setprecision(3) << prcnt<<"%"<<endl;
		//cout<<fixed <<setprecision(3) << prcnt<<"%" is used to set precision to 3 decimal points
		 
		count=0;
	}
	
}
