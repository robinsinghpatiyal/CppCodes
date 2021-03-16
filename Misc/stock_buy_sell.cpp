#include<bits/stdc++.h>
using namespace std;

int main(){
	int dif=0;
	
	vector<int> arr{2,1,4,3,7};
	
	
	for(auto i = arr.begin(); i!=arr.end()-1; i++){
		for(auto j= i+1; j!=arr.end(); j++){
			if(*i<*j && *j-*i>dif){
				dif=*j-*i;
			}
		}
	}
	
	cout<<dif;
}
