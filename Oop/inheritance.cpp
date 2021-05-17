#include<bits/stdc++.h>
using namespace std;

class Animals{
	public:
		void sound(){
			cout<<"HAHA";
		}
};

class pig: public Animals{
	public:
		void sound(){
			cout<<"wewe";
		}
};

int main(){
	Animals an;
	pig pg;
	an.sound();
	pg.sound();
}
