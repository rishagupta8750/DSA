//Binary Search
#include <iostream>
using namespace std;
int binarySearch(int key, int size, int arr[])
{
    int m,s=0,e=size-1;
    while(s<=e)
    {
        m = (s+e)/2;
        if(arr[m]<key)
        {
            s = m+1;
        }
        else if(arr[m]==key)
        {
            return m;
        }
        else
        {
            e = m-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={2,4,6,8,12,18}, arr2[]={3,8,11,14,16};
    cout << binarySearch(4,6,arr) << endl;
    cout << binarySearch(16,5,arr2) << endl;
}
