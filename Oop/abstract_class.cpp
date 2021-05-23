#include <iostream>
using namespace std;

class AbsClass
{
public:
    virtual void func() = 0;
};

class Child : public AbsClass
{
public:
    void func()
    {
        cout << "This is being called as the required funtion";
    }
};

int main()
{
    Child obj;
    obj.func();
}
