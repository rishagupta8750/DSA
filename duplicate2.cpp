//duplicate
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,4,6}, i,x,a,b,c;
    x = sizeof(arr)/sizeof(int);
    for(i=0; i<x; i++)
    {
        a = a^arr[i];
    }
    for(i=0; i<x; i++)
    {
        a = a^i;
    }
    cout << "duplicate element: " << a << endl;
    return 0;
}
