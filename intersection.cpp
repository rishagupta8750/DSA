//Intersection of 2 arrays
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i,j,k,arr[]={1,3,4,7,9,11,23,34}, arr2[]={2,5,6,7,8,9,10,20,30,34,40}, len, len2;
    vector <int> vec;
    len=sizeof(arr)/sizeof(int);
    len2=sizeof(arr2)/sizeof(int);
    for(i=0; i<len; i++)
    {
        int element = arr[i];
        for(j=0; j<len2; j++)
        {
            if(element<arr2[j])
            {
                break;
            }

            else if(element==arr2[j])
            {
                vec.push_back(element);
                element = INT_MIN;
                break;
            }
        }
    }
    cout << "Intersection elements: " << endl;
    for(i=0; i<vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    return 0;
}
