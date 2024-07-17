//Linear search program
#include <iostream>
using namespace std;
int main()
{
    int key=0, arr[100], i, a,b,c=0;
    cout << "Enter number of elements: " ;
    cin >> a;
    for(i=0; i<a; i++)
    {
        cout << "Enter element " << i+1 << ": " ;
        cin >> arr[i];
    }
    cout << "Enter key: " ;
    cin >> key;
    for(i=0; i<a; i++)
    {
        if(key==arr[i])
        {
            cout << "Key found" << endl;
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout << "Key not found" << endl;
    }
    return 0;
}
