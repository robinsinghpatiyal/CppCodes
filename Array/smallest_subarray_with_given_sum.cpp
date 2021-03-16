#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start=0;
    int end =0;
    int min_len=n+1;
    int sum=0;
    
    while(end<n){
        
        while(sum<=s && end<n){
            sum = arr[end]+sum;
            end++;
        }
        
        while(sum>s && start<n){
            
            if(end-start<min_len){
                min_len = end-start;
            }
            
            sum = sum - arr[start];
            start--;
            
    }
}
cout<<min_len+1;

}

int main(){
    int test;
    cin>>test;
    while(test--){
        solution();
    }
}
