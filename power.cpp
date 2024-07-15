#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,flag=0;
    cout << "Enter any number: " ;
    cin >> a;
    for(int i=0; i<31; i++)
    {
        if(a==pow(2,i))
        {
            cout << a << " is a power of 2" << endl;
            flag=1;
            break;
        }
    }
    if(flag!=1)
    {
        cout << a << " is not a power of 2" << endl;
    }
    return 0;
}
