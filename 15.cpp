/*
1234
 234
  34
   4
   */
#include <iostream>
using namespace std;
int main()
{
    int b,c, i,j,k;
    for (i=0; i<4; i++)
    {
        int a= i+1;
        for(k = 0; k<i; k++)
        {
            cout << " ";
        }
        for(j=4; j>i; j--)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}

