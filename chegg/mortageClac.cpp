#include<bits/stdc++.h>
#define dp (float)0.2
#define taxRate (float)1.25
#define utilities (float)300.00
#define insc (float)550.00
using namespace std;

void input(float *sp, float *roi, float *ly){
	cout<<"Enter the Selling Price: ";
	cin>>*sp;
	cout<<"Enter the Rate of Intereset: ";
	cin>>*roi;
	cout<<"Enter the Number of Years of Loan";
	cin>>*ly;
}


int main(){
	float sellingPrice, rateOfInterest, loanYears;
	input(&sellingPrice, &rateOfInterest, &loanYears);
	cout<<sellingPrice<<" "<<rateOfInterest<<" "<<loanYears<<endl;
}
