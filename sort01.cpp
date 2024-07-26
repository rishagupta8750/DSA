//Sort 0,1
#include <iostream>
using namespace std;
int main()
{
    int i=0,j,k,arr[]={0,1,0,1,1,0,0,0,0,1};
    int len = sizeof(arr)/sizeof(int);
    j=len-1;
    while(i<j)
    {
        if(arr[i]!=1)
        {
            i++;
        }
        if(arr[j]!=0)
        {
            j--;
        }
        if(arr[i]==1 && arr[j]==0)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    cout << "Sorted array: " << endl;
    for(i=0; i<len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
