#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
This program is using the data structure Linked List
Arrays not used beacuse of the limitation of datatypes
*/

/*
IMPORTANT: This program takes input as " Word:Meaning "
*/


//Creating a node to make the linked list
struct node{
	char word[30];
	struct node *next;
};

//Adding data to the end of the linked list which will be added 
//to the file 
struct node *add(struct node* headnode,char n[40]){
	struct node *nnode;
	nnode=(struct node*)malloc(sizeof(struct node));
	strcpy(nnode->word,n);
	nnode->next=NULL;

	if(headnode==NULL){
		headnode=nnode;
		return headnode;
	}

	struct node *temp=headnode;

	while(temp->next!=NULL)
		temp=temp->next;

	temp->next=nnode;		
	return headnode;
}

//Deleting the user specified data from the linked list
//which will be further removed from the specified file
struct node *delete(struct node *headnode,char n[40]){
	//a counter which will be incremented to 1 if the word is found
	int foundvalue=0;
	
	//checking if the head node contains the word or not
	if(strcmp(headnode->word,n)==0){
		foundvalue=1;
	struct node *p=headnode;
	headnode=headnode->next;
	free(p);
	}
	else
	{
		struct node *curr=headnode->next;
		struct node *prev=headnode;
		
		//Traversing the linked list to search for the specified word
		while(curr!=NULL){
			// comparing the current word of linked list with the specified word and deleting if matched
			if(strcmp(curr->word,n)==0){			
				prev->next=curr->next;
				free(curr);
				foundvalue=1;
				break;
			}
		prev=curr;
		curr=curr->next;
		}
	}	

	if(foundvalue==0)
		printf("Word not foundvalue\n");
	else
		printf("Word deleted successfully\n");

	return headnode;
}

//Function which will search for the given word using the characters
void search(struct node *headnode,char c){
	struct node *temp=headnode;
	int cnt=0;
	printf("Words in dictionary\n");
	while(temp!=NULL){
	if(temp->word[0]==c){
		cnt++;
		printf("%s\n",temp->word);
	}
	temp=temp->next;
	}
	printf("\n");
	if(cnt==0)
	printf("No Such Word Availabe\n");
	else
		printf("Total number of words in dictionary = %d\n",cnt);
}	

//Printing all the words from the file
void showContents(struct node *nnode)
{
    while(nnode != NULL)
    {
        printf("%s \n",nnode->word);
        nnode= nnode->next;
   }

}

//Driver function with file handling controls
int main(){
	FILE *file_pointer;
	//opening the file in read mode
	//creating file "inputWords" if it doesn't exist
	
	file_pointer=fopen("inputWords.txt","r");
	char name[30];
	struct node *headnode=NULL;
	
	while(fgets(name,sizeof name,file_pointer) != NULL){
		headnode=add(headnode,name);
	}
	
	fclose(file_pointer);
	printf("---DICTIONARY OPENED SUCCESSFULLY---\n \n The words in the dictionary are : \n");
	showContents(headnode); 	//Printing the contents of dictionary if there are any
	printf("\nFOLLOWING ARE THE OPTIONS AVAILABLE : \n");
	
	//Using while loop to traverse through user input
	//Switch statement can also be used
	while(1){
		printf("1: Insert word in dictionary\n");
		printf("2: Delete word from dictionary\n");
		printf("3: Search word from dictionary \n");
		printf("4: Search word from dictionary using only staring letters\n");
		printf("5: All contents of Dictionary \n");
		printf("6: Exit\n");
		printf("Enter choice: ");
		int n;
		scanf("%d",&n);
		
		//For the insertion process
		
		//NOTE: Input must be "Word:Meaning" ->No space should be given because of limitation of scanf function
		if(n==1){
			printf("Enter the word: ");
			char n[30];
			scanf("%s",n);
			headnode=add(headnode,n);
			printf("Word added successfully\n");
		}
		
		else if(n==2){
			printf("Enter the word to delete: ");
			char n[30];
			scanf("%s",n);
			headnode=delete(headnode,n);
		}
		
		else if(n==3){
			printf("Enterthe word: ");
			char ch;
			scanf(" %c",&ch);
			search(headnode,ch);
		}
		
		else if(n==4){
			printf("Enter the starting letter of the word: ");
			char ch;
			scanf(" %c",&ch);
			search(headnode,ch);
		}
		
		else if(n==5){
			printf("The words in the dictionary are : \n");
			showContents(headnode);
		}
		
		else if(n==6){
			FILE *f;
			//Updating the file here by opening it in write mode
			//and then closing 
			f=fopen("inputWords.txt","w");
			struct node *temp=headnode;
			
			while(temp!=NULL){
				fputs(strcat(temp->word,"\n"),f);
				temp=temp->next;
			}
	
			printf("Dictionary Updated Successfuly\n");
			break;
		}
	}
	return 0;
}	
