//array reversal
#include <iostream>
using namespace std;
int main()
{
    int x=0, arr[100], a,b,c,d;
    cout << "Enter the number of elements: " ;
    cin >> x;
    for(a=0; a<x; a++)
    {
        cout << "Enter element " << a+1 << ": ";
        cin >> arr[a];
    }
    for(a=0 ; a<x/2; a++)
    {
        c = arr[a];
        arr[a] = arr[x-(a+1)];
        arr[x-(a+1)] = c;
    }
    cout << "Reversed array: " << endl;
    for(a=0;a<x; a++)
    {
        cout << arr[a] << " ";
    }
    return 0;
}

