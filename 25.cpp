//Butterfly pattern to test myself
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n,o,p,x,y,z;
    cout << "Enter number of rows: " ;
    cin >>x;
    for(i=0; i<x; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout << "* ";
        }
        for(k=x-1; k>i; k--)
        {
            cout << "    ";
        }
        for(l=0; l<=i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for(m=x; m>0; m--)
    {

        for(n=0; n<m; n++)
        {
            cout << "* ";
        }
        for(o=x; o>m; o--)
        {
            cout << "    ";
        }
        for(p=0; p<m; p++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
