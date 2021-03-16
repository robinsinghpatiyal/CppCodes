#include<bits/stdc++.h>
using namespace std;


class Node{
	public:
	int data;
	Node* next;
};

void append(Node** head, int data){
	Node* new_node = new Node();
	Node *last = *head;
	
	new_node->data = data;
	new_node->next = NULL;
	
	if(*head == NULL){
		*head = new_node;
		return;
	}
	else{
		while(last->next!=NULL){
			last = last->next;
		}
	last->next = new_node;
	return;
	}
}
void sorting(Node *node)  
{  
	vector<int> vec;
    while (node != NULL)  
    {  
        vec.push_back(node->data);  
        node = node->next;  
    }  
    sort(vec.begin(),vec.end());
    
    for(auto i=vec.begin();i!=vec.end();i++){
    	cout<<*i<<" ";
	}
}  


int main(){
	Node* head = NULL;
	cout<<"Enter the number of entries in the linked list:";
	int n ;
	cin>>n;
	for(int i =0;i<n;i++){
		int data;
		cin>>data;
		append(&head,data);
		
	}
	
	cout<<"After correcting: ";  
    sorting(head);  
}
