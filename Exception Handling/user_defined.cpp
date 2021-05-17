#include<bits/stdc++.h>
using namespace std;

class IDefinedIt : public exception{
	public:
	const char * def() const throw(){
		return "Hell YeaH!! I defined it!";
	}
};

int main(){
	try{
		throw IDefinedIt();
	}
	catch(IDefinedIt& id){
		cout<<id.def();
	}
}


