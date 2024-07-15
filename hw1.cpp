#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any alphabetical or numeric character: " << endl;
    cin >> ch;
    if (ch >=65 && ch <=90)
    {
        cout << ch << " is uppercase" << endl;
    }
    else if (ch >= 97 && ch<=122)
    {
        cout << ch << " is lowercase" << endl;
    }
    else if (ch >= 48 && ch<=57)
    {
        cout << ch << " is numeric" << endl;
    }
    return 0;
}
