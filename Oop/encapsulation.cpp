#include <iostream>
using namespace std;

class Parent
{
private:
    int num;
    string name;

public:
    void setNum(int n)
    {
        num = n;
    }
    int getNum()
    {
        return num;
    }
    void setName(string na)
    {
        name = na;
    }
    string setName()
    {
        return name;
    }
    void funtion1()
    {
        cout << "the name is : " << name << " and the number is : " << num << endl;
    }
};

int main()
{
    Parent obj;
    obj.setName("Robin");
    obj.setNum(19);
    obj.funtion1();
}