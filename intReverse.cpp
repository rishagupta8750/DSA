//Integer reversal
#include <iostream>
using namespace std;
int main()
{
    int i=0,j,k,x=0,a;
    cout << "Enter any number: " ;
    cin >> a;
    if(x<INT_MAX && x>INT_MIN)
    {
        while(a!=0)
        {
            k = a%10;
            x = (x*10)+k;
            a = a/10;
        }
    }

    cout << "reversed integer: " << x << endl;
    return 0;
}
