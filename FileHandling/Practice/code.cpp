#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream oFile("test.txt");
    string s = "Hi my name is Robin and I am planning to write this to the file!!";
    oFile << s;
    oFile.close();
    cout << "Enter the name of the file with the extension";
    ifstream iFile("test.txt");
    if (iFile)
    {
        cout << "It exits" << endl;
    }
    else
    {
        cout << "it does not exists" << endl;
    }

    string str;
    getline(iFile, str);
    cout << str;
    iFile.close();
}