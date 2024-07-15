/*24. ALWAYS TRY TO SEE HOW ELSE A PROBLEM CAN BE SOLVED.
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
#include <iostream>
using namespace std;
int main()
{
    int x,y,z,i,j,k,l,m,n;
    cout << "Enter number of rows: ";
    cin >> x;
    for(i=0; i<x; i++)
    {
        y =i+1;
        for(j=x; j>i; j--)
        {
            cout << "  ";
        }
        for(k=0; k<=i; k++)
        {
            cout << y << " ";
            y++;
        }
        y -= 2;
        for(l=0; l<i; l++)
        {
            cout << y<< " ";
            y--;
        }
        cout << endl;
    }
    return 0;
}
