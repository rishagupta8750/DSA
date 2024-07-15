//Fibonacci
#include <iostream>
using namespace std;
int main()
{
    int a,i,j,k,first_num=0,second_num=1, result;
    cout << "Enter number of results you want to generate in the sequence: ";
    cin >> a;
    cout << "0 1 ";
    for(i=0; i<a; i++)
    {
        result  = first_num+ second_num;
        cout << result << " ";
        first_num = second_num;
        second_num = result;
    }
    return 0;
}
