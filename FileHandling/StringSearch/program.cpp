#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	/*
	Here I am givig the direct name while opening.
	if you want to open a file whose name is defined by user 
	you can use the followiing
		cin>>name;
		iFile.open(name.c_str()); 
	*/
	ifstream fin("cities.txt"); //opening text file
    int count=0;
    char ch[20],c[20]; //ch will read words from file and c is user defined word
 
    string line;
 
    cout<<"Enter a word to count:";
    gets(c);
    int n =1;
    while (getline(fin, line)) //redinng line by line 
	{
       if (line.find(c) != std::string::npos){ //searching for the user defined word
           cout << n <<". "<< line << endl;	//printing line in which the word is found
           n++;								//line numeber incremented
       }
        
   }
	cout<<endl;
	fin.close();  //closing the file
	
	//both steps can be done in one go but to make it easier to understand I have done it separately

	fin.open("cities.txt");  //again opening file to count the number of occurences

	while(fin){
	fin>>ch;
    if(strcmp(ch,c)==0)
    count++;			//counting the number of occurences
    } 
 

 cout<<"Occurrence= "<<count; //printing numbr of occurences
  //closing file
  fin.close();
 
 return 0;
 
}
