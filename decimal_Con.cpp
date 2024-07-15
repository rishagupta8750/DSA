////1. decimal to binary conversion
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i=0, x, bit=0, ans=0,  n,a,b;
    cout << "Enter any decimal number: ";
    cin >> x;
    while(x!=0)
    {
        bit = x&1;
        ans = ans + bit*pow(10,i);
        i++;
        x >>= 1;
    }
    cout << "Binary rep: " << ans << endl;
    return 0;
}
