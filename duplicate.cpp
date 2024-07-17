//duplicate number
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,3}, i,x,a,b;
    x = sizeof(arr)/sizeof(int);
    for(i=1; i<=x; i++)
    {
        if(arr[i]!=i)
        {
            a = arr[i];
        }
    }
    cout << "Duplicated number: " << a << endl;
    return 0;
}
