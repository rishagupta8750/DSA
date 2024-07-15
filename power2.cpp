//power of 2 (2nd approach)
#include <iostream>
using namespace std;
int main()
{
    int x,ans=0, count1=0, y, temp;
    cout << "Enter any number: " ;
    cin >> x;
    temp = x;
    while(x!=0)
    {
        y = x&1;
        if(y)
        {
            count1++;
        }
        x >>= 1;
    }
    if(count1>1)
    {
        cout << temp << " is not a power of 2" << endl;
    }
    else
    {
        cout << temp << " is a power of 2" << endl;
    }
    return 0;
}
