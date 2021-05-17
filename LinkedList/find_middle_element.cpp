#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void starting(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void append(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;
	
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}
	
	Node* last = *head_ref;
	
	while(last->next!= NULL){
		last = last->next;
	}
	last->next= new_node;
}

//funciton to find the middle element

void middle(Node* head){
	Node* fast = head;
	Node* slow = head;
	
	if(head == NULL){
		cout<<"Empty!!";
		return;
	}
	while(fast !=NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	
	cout<<endl<<"The middle element is : "<<slow->data;
}

void printList(Node* head){
	while(head != NULL){
		cout<<" "<<head->data;
		head = head->next;
	}
}

int main(){
	Node* head = NULL;
	
	starting(&head,7);
	starting(&head,6);
	starting(&head,5);
	starting(&head,4);
	starting(&head,3);
	starting(&head,2);
	starting(&head,1);
	
	append(&head,8);
	
	printList(head);
	
	middle(head);
	
}
