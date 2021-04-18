#include<bits/stdc++.h>		//importing the STL
using namespace std;

//declaring a recursive check funtion which will return true if oen string is substring of another
bool check(string virus, string bdComp, int a, int b);

//defing the check funtion
bool check(string virus, string bdComp, int a, int b){
	if (b == 0)
        return true;
    if (a == 0)
        return false;
 
    // If last characters of two strings are matching
    if (virus[a - 1] == bdComp[b - 1])
        return check(virus, bdComp, a - 1, b - 1);
 
    // If last characters are not matching
    return check(virus, bdComp, a - 1, b);
	
}
//defining the main function
int main(){
	string virus;
	cin>>virus;
	int sizeVirus = virus.size(); // finding the size of the string
	int n;
	cin>>n;
	string arr[n]; //this array will store the outputs
	
	for(int i =0; i<n;i++){
		string bdComp;
		cin>>bdComp;
		int bdCompLen = bdComp.size();
		
		//using ternary operator to assing values in the array
		//will assign POSITIVE if the function return true and NEGATIVE if the function returns false
		check(virus, bdComp, sizeVirus, bdCompLen) ? arr[i] ="POSITIVE" : arr[i] ="NEGATIVE"; 
	}
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
