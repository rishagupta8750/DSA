/*22.
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,x,l,m,n;
    cout << "Enter number of rows: " ;
    cin >> x;
    for(i=1; i<x+1; i++)
    {
        for(j =x; j>i; j--)
        {
            cout << " ";
        }
        for(k =0; k< (2*i)-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(l=x-1; l>0; l--)
    {
        for(m=x-1; m>=l; m--)
        {
            cout << " ";
        }
        for(n=0; n<(2*l)-1; n++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
