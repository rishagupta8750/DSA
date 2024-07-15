/*
D
CD
BCD
ABCD
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    char a;
    for(i=0; i<4; i++)
    {
        char a = 'E';
        a -=1;
        for(j=0; j<=i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}
