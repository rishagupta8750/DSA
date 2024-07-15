/*23.
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j,k,l,m,n,x,y,z;
    cout << "Enter the number of rows: ";
    cin >> x;
    for(i=x; i>0; i--)
    {
        for(j=x; j>i; j--)
        {
            cout << "  ";
        }
        for(k=1; k<(2*i); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(l=1; l<=x-1; l++)
    {
        for(m=x-1; m>l; m--)
        {
            cout << "  ";
        }
        for(n=0; n<(2*l)+1; n++)
        {
            cout << "* ";
        }
        cout <<endl;
    }
    return 0;
}
