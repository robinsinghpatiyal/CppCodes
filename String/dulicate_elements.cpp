#include<bits/stdc++.h>
using namespace std;

# define numberchars 256

class duplicate_char{
	public:
		
		void charcount(char *s, int *count){
			int i;
			for( i=0;*(s+i);i++){
				count[*(s+i)]++;
			}
		}
		
		void printfuplicatecharacters(char *str){
			int *count = (int *)calloc(numberchars,sizeof(int));
			charcount(str, count);
			for(int i=0;i<numberchars;i++){
			if(count[i]>1){
			cout<<char(i)<<" "<<count[i]<<endl;
		}
			
		}
	}


};

int main(){
	duplicate_char dupchar;
	
	char s[numberchars];
	cin>>s;
	
	cout<<"the duplicate elemnets are:"<<endl;
	dupchar.printfuplicatecharacters(s);
	
}
