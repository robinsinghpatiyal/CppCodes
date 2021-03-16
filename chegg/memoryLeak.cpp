#include <iostream>
#include <cstring>

using namespace std;


class ContactInfo{
private:
char* name;
char* phone;
public:

ContactInfo(){
cout<<"Constructor Called!"<<endl;
name = new char[9];
strcpy(name, "no_entry");
phone = new char[9];
strcpy(phone, "no_entry");
}

//getters
//get phone number

const char* getPhone(){
return phone;
}

//setters
void setPhone(const char* p){
phone = new char[strlen(p)+1];
strcpy(phone, p);
}
  
//~ makes the destructor
//cannot take parameter arguements
~ContactInfo(){
cout<<"Destructor Called!"<<endl;
delete [] name;
name = nullptr;
delete [] phone;
phone = nullptr;
}

};

int main(void){

ContactInfo person; //constructor called!

ContactInfo* person2; //constructor not called!

person2 = new ContactInfo; //constructor called!
  
person.setPhone("867-5309");//Jenny!
cout<<"person.phone = "<< person.getPhone() <<endl;

delete person2;//call the destructor automatically
  
return 0;
}
