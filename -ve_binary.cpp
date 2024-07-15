//Binary of negative number
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i=0, bit=0, ans=0, bit2=0, ans2=0, j=0, k,l, mask=0;
    cout << "Enter any negative number without its sign: " ;
    cin >> k;
    l = k;
    while(k!=0)
    {
        mask = (mask << 1) | 1;
        k >>= 1;
    }
    ans = (~l)& mask;
    while(ans!=0)
    {
        bit = ans&1;
        ans2 = ans2 + (bit*pow(10,i));
        i++;
        ans >>= 1;
    }
    cout << "Binary representation of negative number: " << ans2+1 << endl;
    return 0;
}
