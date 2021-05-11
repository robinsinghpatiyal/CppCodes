#include<bits/stdc++.h> //importing the standard template library
using namespace std;

int main(){
	//main function to perform all the operations
	
	int limit = 100; //limit is just the highest random number that can be generated.
					//You can change this if you want to
	int mainLoop= 1;
	while(mainLoop==1){
					
		int randNum = 1 + (rand() % limit); //this will geneate a random number between 0-100(including 100)
		
		bool loop = false;
		int count = 0; //this will keep track of number of tries
		while(loop == false){
			count++;
			cout<<"Enter a number to guess: ";
			int guess;
			cin>>guess; //this will store the guess in guess variable
			
			//if the guessed number is higher than random generated number
			if(guess<randNum){
				cout<<"Sorry, guess is too low"<<endl;
			}
			
			//if the guessed number is higher than random generated number
			else if(guess>randNum){
				cout<<"Sorry, guess is too high"<<endl;
			}
			else{
				//if the user guesses correct in first try 
				if(count==1){
					cout<<"Congratulations! You have guess the correct number in first try";
				}
				//else 
				else{
					cout<<"Congratulations! You have guessed the correct number in "<<count<<" tries";
				}
				loop=true;
			}
		}
		
		cout<<endl<<"Enter 1 if you want to play again or 0 to quit: ";
		cin>>mainLoop;
		cout<<endl;
		
	}
	return 0;
	
}
