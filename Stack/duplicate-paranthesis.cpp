#include<iostream>
#include<stack> //for using stacks 
using namespace std;
//declaring the function of bool type
bool check(string s);

bool check(string s){
	stack<char> stk;	//creating stack of character
	int a,b;
	int i =0;
	int loop = 0;
	
	//iterating through the string
	
	for(char ch : s){
		i++;
		
		//if the current character is close paranthesis ')'
		if(ch ==')'){
			b = i;
			a=i;
		
			char topElement = stk.top(); 
			//pop characters from the stack
			stk.pop();
			
			//checking the number of character between openign and closing parenthesis
			int numElem = 0;
			
			while(topElement!='('){
				numElem++;
				topElement = stk.top();
				stk.pop();
				a--;
			}
			
			if(numElem<1){
				cout<<a<<" "<<b;
				cout<<"Duplicate () found at subexpression: ";
				for(int k =a;k<=b;k++){
					cout<<s[k];
				}
				loop =1;
			}
		}
		else{
			stk.push(ch); //else pushing the elements into the stack
		}
			
	}
	 //if no duplicates are found	
	 if(loop==0){
	 	cout<<"No duplicate () found";
	 }
}

//main funtion
int main(){
	string str;
	cout<<"Enter the expression: ";
	cin>>str;
	
	//checking the result after calling the funtion and then showing it
	check(str);
}

