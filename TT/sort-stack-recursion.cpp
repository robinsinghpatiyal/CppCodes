#include <iostream>
using namespace std;

struct stack {
	int data;
	struct stack* next;
};


void initStack(struct stack** s) {
	*s = NULL; 
 }

int isEmpty(struct stack* s)
{
	if (s == NULL)
		return 1;
	return 0;
}

void push(struct stack** s, int x)
{
	struct stack* p = (struct stack*)malloc(sizeof(*p));

	if (p == NULL) {
		fprintf(stderr, "Memory allocation failed.\n");
		return;
	}

	p->data = x;
	p->next = *s;
	*s = p;
}


int pop(struct stack** s)
{
	int x;
	struct stack* temp;

	x = (*s)->data;
	temp = *s;
	(*s) = (*s)->next;
	free(temp);

	return x;
}


int top(struct stack* s) { 
	return (s->data); 
}


void sortedInsert(struct stack** s, int x)
{
	if (isEmpty(*s) or x > top(*s)) {
		push(s, x);
		return;
	}

	int temp = pop(s);
	sortedInsert(s, x);

	push(s, temp);
}


void sortStack(struct stack** s)
{
	if (!isEmpty(*s)) {

		int x = pop(s);
		sortStack(s);
		sortedInsert(s, x);
	}
}

void printStack(struct stack* s)
{
	while (s) {
		cout << s->data << " ";
		s = s->next;
	}
	cout << "\n";
}

// Driver code
int main(void)
{
	struct stack* top;

	initStack(&top);
	int inp;
	cout<<"Enter the elements of stack and enter 9999 to stop!"<<endl;
	while(inp!=9999){
		cin>>inp;
		if(inp==9999) break;
		push(&top, inp);
	}

	cout << endl<< "Stack before sorting : "<<endl;
	printStack(top);

	sortStack(&top);
	cout << endl;

	cout << "Stack after sorting :"<<endl;

	printStack(top);

	return 0;
}



