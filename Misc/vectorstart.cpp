#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr;
	
	for(int i=0;i<=10;i++){
		arr.push_back(i*10);
	}
	
	cout<<"Size of vector " << arr.size(); //Returns the number of elements in the vector
	cout<<endl<<"Capacity :" << arr.capacity(); //Returns the size of the storage space currently allocated to the vector expressed as number of elements.
	cout<<endl<<"Maximum size :" <<arr.max_size(); //Returns the maximum number of elements that the vector can hold
	
	arr.resize(5);
	
	cout<<endl<<"After Resizing, size" << arr.size()<<endl;
	
	if(arr.empty()==true)
		cout<<endl<<"Vector is empty"<<endl;
	else
		cout<<"Vector contains elements"<<endl;
	
	arr.shrink_to_fit(); //Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
	
	for(auto i=arr.begin(); i!=arr.end();i++){
		cout<<*i<<" "<<endl;
	}
	
	cout<<"Element at second position is: "<<arr.at(2);
	
	arr.pop_back();//removes the last element
	
	int n = arr.size();
	cout<<endl<<"The last element is: "<<arr.at(n-1)<<endl;
	
	arr.insert(arr.begin(),5);
	cout<<"The first element is "<<arr.at(0);

}
