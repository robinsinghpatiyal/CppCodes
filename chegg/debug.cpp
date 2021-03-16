#include <iostream>
using namespace std;

const int CAPACITY=20;

void displayArray(int array[], int numElements);
void fillArray( int array[], int &numElements);
void removeElement( int array[], int &numElements, int position);
int insertElement( int array[], int &numElements, int position, int target);
int searchElement( int array[], int numElements, int element);

int main(){
	int NumArray[CAPACITY]; // an int array with a given CAPACITY
	int NumArrayElems=0; // the array is initially empty, i.e., contains 0 elements
	int pos;
	int data;
	int search=0;

	fillArray(NumArray, NumArrayElems);
	displayArray(NumArray, NumArrayElems);


	cout<<"Enter a value and a position to insert: ";
	cin>>data;
	cin>>pos;
	insertElement(NumArray, NumArrayElems,pos,data);
	displayArray(NumArray, NumArrayElems);

	cout<<"Enter a value to delete from the array: ";
	cin>>data;
	pos=searchElement(NumArray,NumArrayElems, data);


	if(pos!=-1){
		removeElement(NumArray,NumArrayElems,pos);
		displayArray(NumArray, NumArrayElems);
	}
	else{
		cout<<"Value not found!\n";
	}
		//ask user to input a value to be inserted at last of array.
		cout<<"Enter a value to insert at last of array: ";
		cin>>data;
		insertElement(NumArray, NumArrayElems,NumArrayElems,data);
		
		displayArray(NumArray, NumArrayElems);
	

	return 0;
}


void displayArray(int array[], int numElems)
{
	for (int i = 0; i < numElems; i++)
		cout << array[i] << " ";
		cout << endl;
}

void fillArray( int array[], int &numElements)
{ 
	int x=0,i=0;
	cout<<"Enter a list of up to 20 integers or -1 to end the list\n";
	while(x!=-1 && numElements<CAPACITY){
  
		cin>>x;
		cout<<"";
		if(x==-1) 
			break;
		array[i]=x;
		i++;
	numElements++;
	}
}

void removeElement( int array[], int &numElements, int position){
  
		if(position>numElements||position<0){
			cout<<"Invalid position Entered"<<endl;
  
		}
		else{
			for(int i=position;i<numElements;i++){				
				array[i]=array[i+1];
			}
		}
	numElements--;
	//return 1;
}

int insertElement(int array[], int &numElements, int position, int target){
	if(position<=CAPACITY&&position>=0){
		for(int i=numElements+1;i>=position;i--){
			array[i]=array[i-1];
		}
		array[position]=target;
	}
	numElements++; //Here numElements should be icremented by 1 so that array size can be increased
  
	return 1;
}

int searchElement( int array[], int numElements, int element){ 
	int x=-1,i=0;
	for(i=0;i<numElements;i++){
		if(array[i]==element){
			x=i;
		}
	}
	return x;
}
