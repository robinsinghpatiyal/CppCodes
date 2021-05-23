#include<bits/stdc++.h>
using namespace std;

struct MyExcp : public exception{
	const char* func() throw(){
		return "C++ EXCP";
	}
};

int main(){
	try{
		throw MyExcp();
	}
	catch(MyExcp& e){
		cout<<e.func();
	}
}
