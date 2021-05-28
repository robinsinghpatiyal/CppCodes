#include <bits/stdc++.h>
using namespace std;

class MyException : public exception
{
public:
    char *speed()
    {
        return "Go Slow You IDIOT!";
    }
};

int main()
{
    int sp;
    cout << "Enter Speed: ";
    cin >> sp;
    try
    {
        if (sp > 100)
        {
            throw MyException();
        }
    }
    catch (MyException e)
    {
        cout << e.speed();
    }
    cout << "The speed was: " << sp;
}