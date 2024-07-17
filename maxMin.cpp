//Maximum minimum program
#include <iostream>
using namespace std;
int main()
{
    int arr[100], max1=0, min1=0, a,b;
    cout << "Enter number of elements: " << endl;
    cin >> a;
    for(int i=0; i<a; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    max1 = arr[0];
    min1= arr[0];
    for(int i=0; i<a; i++)
    {
        if(arr[i]>max1)
        {
            max1 = arr[i];
        }
        if(arr[i]<min1)
        {
            min1 = arr[i];
        }
    }
    cout << "Maximum element: " << max1 << endl;
    cout << "Minimum element: " << min1 << endl;
    return 0;
}
