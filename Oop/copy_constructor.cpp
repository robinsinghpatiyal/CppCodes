#include<iostream>
using namespace std;

class testing{
	private:
		int x,y;
	public:
		testing(int a, int b){
			x=a;
			y=b;
		}
		
		//copy constructor
		testing(const testing &p1){
			x = p1.x;
			y = p1.y;
		}
		
		int getx(){
			return x;
		}
		
		int gety(){
			return y;
		}
};

int main(){
	testing p1(10,20);
	testing p2 = p1;
	cout<<p2.getx();
	cout<<endl;
	cout<<p2.gety();
}
