// including the standard template library of c++
#include <bits/stdc++.h>
using namespace std;

//creating node of linked list
struct node {
	char data; 	//using char datatype for elements you can change if you want to
	struct node* next; 
};

//this will return a boolean value depending upon the list being a palindrome or not
bool isPalindromeUtil(struct node** left, struct node* right)
{
	//stops the recursion process when right = NULL
	if (right == NULL)
		return true;

	//if sub-list is not palindrome then no need to check for current left and right
	bool a = isPalindromeUtil(left, right->next);
	if (a == false) 
		return false;

	//checking the values at current left and right
	bool b = (right->data == (*left)->data);

	//traversing to the left to next node
	*left = (*left)->next;

	return b;
}

// A wrapper over isPalindromeUtil()
bool isPalindrome(struct node* head)
{
	isPalindromeUtil(&head, head);
}

//ush a node to linked list. Note that this function changes the head
void push(struct node** head_ref, char new_data)
{
	//allocating node
	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// A utility function to print a given linked list
void printList(struct node* ptr)
{
	while (ptr != NULL) {
		cout << ptr->data << "->";
		ptr = ptr->next;
	}
	cout << "NULL\n" ;
}

//main function / driver function
int main()
{
	//empty list intitililzation
	struct node* head = NULL;
	//this will be going into list one by one
	
	char str[] = "xyyxyyx"; // you can change it if you want to make user to enter the data
	
	//the above data inside the list will given palindrome twice
	// 1 x
	// 2 xyyx
	// 3 xyyxyyx
	for (int i = 0; str[i] != '\0'; i++) {
		push(&head, str[i]);
		printList(head);
		isPalindrome(head) ? cout << "The list till here is Palindrome\n\n" : cout << "The list till here is Not Palindrome\n\n";
	}

	return 0;
}

