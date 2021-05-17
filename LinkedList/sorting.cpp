#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void sortAdd(Node** head_ref, Node* new_node){
	
	Node* current;
	
	if(*head_ref == NULL || (*head_ref)->data >= new_node->data){
		
		new_node->next = *head_ref;
		*head_ref = new_node;
		
	}
	else{
		current = *head_ref;
		
		while(current->next != NULL && current->next->data < new_node->data){
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
	
}

void sort(Node** head_ref){
	
	Node* one = *head_ref;
	Node* two = NULL;
	
	while(one != NULL){
		Node* next = one->next;
		sortAdd(&two, one);
		one = next;
	}
	*head_ref = two;
	
}

void starting(Node** head_ref, int new_data){
	
	Node * new_node = new Node();
	
	new_node->data = new_data;
	
	new_node->next = (*head_ref);
	
	(*head_ref) = new_node;
	
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
	starting(&head,3);
	starting(&head,5);
	starting(&head,4);
	starting(&head,1);
	starting(&head,2);
	starting(&head,6);
	
	printList(head);
	
	sort(&head);
	cout<<endl<<endl;
	
	printList(head);
}
