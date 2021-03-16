#include<bits/stdc++.h>
using namespace std;

const int size = 1e7+10; 
long long int ar[size]; 

int main(){
    int r, c;
    cin>>r>>c;
    while(c--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        ar[x] = ar[x] + z;
        ar[y+1] = ar[y+1] - z;
    }
    
    for(int i = 1; i<=size; i++){
        ar[i] = ar[i-1] + ar[i];
    }
    
    long long maxElement = *max_element(ar, ar+size+1);
    
    cout<<maxElement<<endl;
    return 0;

}
