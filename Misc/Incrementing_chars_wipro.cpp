// Wipro 1

#include<bits/stdc++.h>
using namespace std;

int main(){
	char c[] = "hY aB AYAa there";
	int len = strlen(c);
	int m =0;

	
	
	for(int i = 0; i<strlen(c);i++){
		if(c[i]==' ' || i == strlen(c)-1){
			
			if(i == strlen(c)-1){
				i=i+1;
			}
			
			int n = i;

			if(i>m){
				n = i-m;
			}
			int in = n;
			while(n>0){
				if(int(c[i-n])>= int('a') && int(c[i-n])<= int('z')){
				int as = int(c[i-n]);
				c[i-n]= char(as+in);
				if(int(c[i-n])>int('z'))
					c[i-n] = 'z';
				
			}
				
			if(int(c[i-n])>= int('A') && int(c[i-n])<= int('Z')){
				int as = int(c[i-n]);
				c[i-n]= char(as+in);
				if(int(c[i-n])>int('Z'))
					c[i-n] = 'Z';
				
			}
				
				n=n-1;
				
			}
			m = i+1;
		}
	}
	cout<<c;
	
	
	
}


