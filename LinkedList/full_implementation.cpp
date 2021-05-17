#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node * next;
};

//adding to the front of the linked list

void push(Node** head_ref, int new_data){
	
	Node* new_node = new Node();
	
	new_node->data = new_data;
	
	new_node->next = (*head_ref);
	
	(*head_ref) = new_node;
	
}

//adding after the given node

void insertAfter(Node* prev_node, int new_data){
	
	if(prev_node == NULL){
		cout<<"Prev node can't be null!!";
		return;
	}
	
	Node* new_node = new Node();
	
	new_node->data = new_data;
	
	new_node->next = prev_node->next;
	
	prev_node->next = new_node;
	
}

//adding node to the end of the linked list

void insertEnd(Node** head_ref, int new_data){
	
	Node* new_node = new Node();
	
	Node* last = *head_ref;
	
	new_node->data = new_data;
	
	new_node->next = NULL;
	
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}
	
	while(last->next!=NULL){
		last = last->next;
	}
	
	last->next = new_node;
	return;
}

//print funtion

void print(Node *node){
	while(node != NULL){
		cout<<" "<<node->data;
		node = node->next;
	}
}

//driver code

int main(){
	
	Node* head = NULL;
	
	insertEnd(&head,8);
	
	push(&head,1);
	
	insertAfter(head,4);
	
	print(head);
	
	
}
