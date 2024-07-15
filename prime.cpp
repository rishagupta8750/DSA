//Prime not prime
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,a,b=0,c;
    cout << "Enter any number: " ;
    cin >> a;
    for(i=2; i<a; i++)
    {
        if(a%i==0)
        {
            cout << a << " is not prime." << endl;
            b = 1;
            break;
        }
    }
    if(b!=1)
    {
        cout << a << " is prime" << endl;
    }
    return 0;
}
