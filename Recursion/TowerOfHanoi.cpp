#include<bits/stdc++.h>
using namespace std;

/*
The pattern here is :
Shift 'n-1' disks from 'A' to 'B'.
Shift last disk from 'A' to 'C'.
Shift 'n-1' disks from 'B' to 'C'.
*/

void towerOfHanoi(int n, char first, char final, char third){
	
	if(n==1){
		cout<<"Move disk 1 from rod "<<first<<" to rod "<<final<<endl;
		return;
	}
	
	towerOfHanoi(n-1, first, third, final);
	
	cout<<"Move disk "<<n<<" from rod "<<first<<" to rod "<<final<<endl;
	
	towerOfHanoi(n-1, third, final, first);
	
}

int main(){
	int n;
	cin>>n;
	
	towerOfHanoi(n,'A', 'C', 'B'); //A C B are the names of the rods
	
}
