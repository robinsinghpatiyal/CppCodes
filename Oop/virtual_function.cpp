#include<bits/stdc++.h>
using namespace std;

class base{
	public:
		virtual void fun(){
			cout<<"Hi this is the base class"<<endl;
		}
};

class derived: public base{
	public:
		void fun(){
			cout<<"Hi this the derived class"<<endl;
		}
};

int main(){
	base *obj;
	derived der;
	obj = &der;
	obj->fun();
}
