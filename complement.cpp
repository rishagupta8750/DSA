//2. Complement of base 10 integer
#include <iostream>
using namespace std;
int main()
{
    int i=0, mask, ans=0, x,y,z, temp=0;
    cout << "Enter a base 10 integer: ";
    cin >> x;
    temp  =x;
    mask = 0;
    while(temp!=0)
    {
        mask = (mask<<1)|1;
        temp = temp >> 1;
    }
    ans = (~x)&mask;
    cout << "Complement: " << ans << endl;
    return 0;
}
