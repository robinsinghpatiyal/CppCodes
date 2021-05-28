#include <bits/stdc++.h>
using namespace std;

float divide(int a, int b)
{
    if (b == 0)
    {
        throw "Divide by 0 exception";
    }
    return a / b;
}

int main()
{
    int a = 3;
    int b = 0;
    try
    {
        cout << divide(a, b);
    }
    catch (const char *mssg)
    {
        cout << mssg << endl;
    }
    cout << endl
         << "this to be printed";
    return 0;
}