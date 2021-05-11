#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	
	//assingning the dat to data
	Node(int dat){
		data = dat;
		left = NULL;
		right = NULL;
	}
};

int main(){
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	
	//printing the output 
	cout<<root->data<<endl;
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl;
	cout<<root->left->left->data<<endl;
}


