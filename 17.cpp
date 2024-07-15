/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m;
    for(i=0; i<4;i++)
    {
        for(k=4; k>i; k--)
        {
            cout << "  ";
        }
        l = 1;
        for(j=0; j<=i; j++)
        {
            cout << l << " ";
            l++;
        }
        int a = i;
        for(m=0; m<i ; m++)
        {
            cout << a << " ";
            a--;
        }
        cout << endl;
    }
    return 0;
}
