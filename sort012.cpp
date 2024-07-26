//DNF sort
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int mid=0,high,low=0,arr[]={2,2,0,1,0,1,1,0,2,0}, len;
    len = sizeof(arr)/sizeof(int);
    high = len-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[mid], arr[low]);
                mid++;
                low++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }

    cout << "Sorted array: " << endl;
    for(int i=0; i<len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
