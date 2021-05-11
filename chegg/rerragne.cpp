#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
 * arr, represents the given list of numbers.
 */
vector<int> interchange (vector<int> arr)
{
    vector<int>  answer;
    // Write your code here
    int n= arr.size();

    int newa[n];
    for(int i=0;i<n;i++){
    	newa[arr[i]]=i;
	}


    
    for(int i=0;i<n;i++){
    	answer.push_back(newa[i]);
	}
	
    
    return answer;
}

int main()
{
    
	//input for arr
	int arr_size;
	cin >> arr_size;
	vector<int> arr;
	for ( int idx = 0; idx < arr_size; idx++ )
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	
    //output
	vector<int> result = interchange(arr);
	for ( int idx = 0; idx < result.size() - 1; idx++ )
	{
		cout << result[idx] << " ";
	}
	cout << result[result.size() - 1];
	
    return 0;
}
