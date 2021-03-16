#include <bits/stdc++.h> //importing the standard template librray, if its out of your syllabus scope then you can use iostream
using namespace std;
#define hrRate 10  	//defining hourly rate as 10 to use it in our program without defining it again an agian

int main(){
	float weekHrs = 0;
	//this will terminate the loop when a negative value is encountered
	while(weekHrs>=0){
		cout<<"Enter the total weekly work hours:   ";
		cin>>weekHrs;	//taking weekly hours as input
		if(weekHrs<0){
			break;
		}
		
		float baseSalary = weekHrs * (float)hrRate; //calculating base salary by typecaseting hrRate into float else it will give 0
		
		float weekSales;
		cout<<"Enter the weekly sales amount:       ";
		cin>>weekSales; //taking the weekly sales to calculate the bonus
		
		//calculating bonus
		float bonus;
		if(weekSales<2000){
			bonus = (float)0.05 * weekSales; //5% of weekly sales
		}
		else{
			bonus = (float)0.1 * weekSales; //10% of weekly sales
		}
		
		//calculating weekly salary
		float weekSalary = baseSalary + bonus;
		
		//putting limit on weeky salary to not exceed 800 and showing the results
		if(weekSalary>800){
			cout<<"The total weekly salary is "<<baseSalary<<" + "<<bonus<<endl;
			cout<<"Your total weekly salary will be paid at $800 maximum only!";
			weekSalary = 800;
		}
		else{
			cout<<"The total weekly salary is "<<baseSalary<<" + "<<bonus<<" = "<<weekSalary;
		}
		cout<<endl<<endl;
}
return 0;
}
