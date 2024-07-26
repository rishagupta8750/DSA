#include <iostream>
using namespace std;
int main()
{
    int n, s, i, j, a,b, arr[100];
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter S: ";
    cin >> s;
    for(i=0; i<n; i++)
    {
        arr[i] = i+1;
    }

    cout << "Sorted pairs whose sum is " << s << ": " << endl;
    for(i=0; i<n ; i++)
    {
        for(j=i+1; j<n ; j++)
        {
            if(arr[i]<s)
            {
                if(arr[i]+arr[j]==s)
                {
                    cout << arr[i] << " " << arr[j] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
