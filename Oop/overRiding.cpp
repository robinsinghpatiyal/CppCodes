#include <bits/stdc++.h>
using namespace std;

//without virtual funtion
// class Base
// {
// public:
//     void function()
//     {
//         cout << "Base if being printed!!";
//     }
// };

//with virtual function
class Base
{
public:
    virtual void function()
    {
        cout << "Base is being printed!!";
    }
};

class Child : public Base
{
public:
    void function()
    {
        cout << "Child is being printed!!";
    }
};

int main()
{
    Base *b;
    Child c;
    b = &c;
    b->function();
}
