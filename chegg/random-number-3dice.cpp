#include<bits/stdc++.h>
using namespace std;

int random(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min); //returning the random value
}

int main(){
	int num = 0;
	while(num!=-1){
		cout<<"Please enter the number: ";
		cin>>num;			//taking the number which user guessed as input
		int sum=0;
		int a,b,c;			//these variable will store the randomly generated values
		a=random(1,14);
		cout<<"The first dice shows number: "<<a<<endl;	//showing the output of first dice;
		b=random(1,30);
		cout<<"The first dice shows number: "<<b<<endl;	//showing the output of second dice;
		c=random(1,30);
		cout<<"The first dice shows number: "<<c<<endl;	//showing the output of third dice;
		
		sum = a+b+c;
		cout<<"The Sum of all three dices is: "<<sum<<endl;
	
		if(sum==num){
			cout<<"You guessed right!"<<endl;
		}
		cout<<"Enter -1 if you want to exit or any other key to continue: ";
		cin>>num;		//if n==-1 then the game will end;
	}
	cout<<"Thanks for playing!";	//showing this message at last
	return 0;
}
