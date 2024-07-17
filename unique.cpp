//Unique element
#include <iostream>
using namespace std;
int main()
{
    int x=0, arr[100], a,b,c;
    cout << "Enter the number of elements: ";
    cin >> x;
    for(a=0; a<x; a++)
    {
        cout << "Enter the element " << a+1 << ": ";
        cin >> arr[a];
    }
    for(a=0; a<x; a++)
    {
        b = b ^ arr[a];
    }
    cout << "Unique element: " << b << endl;
    return 0;
}
