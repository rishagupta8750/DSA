#include <iostream>
using namespace std;
int main()
{
    int i=0, ans=0, arr[] = {1,2,3,4,1};
    for(i=0; i<5; i++)
    {
        ans = ans^arr[i];
    }

    for(i=0; i<5; i++)
    {
        ans = ans^i+1;
    }
    cout << "Duplicated number: " << ans << endl;
    return 0;
}
