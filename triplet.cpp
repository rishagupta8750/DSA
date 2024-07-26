//Triplets with given sum
 #include <iostream>
 using namespace std;
 int main()
 {
     int i, j, k, n, K, arr[100];
     cout << "Enter N: ";
     cin >> n;
     cout << "Enter K: ";
     cin >> K;
     for(i=0; i<n ; i++)
     {
         arr[i] = i+1;
     }

     cout << "Triplet sum: " << endl;
     for(i=0; i<n ; i++)
     {
         for(j=i+1; j<n; j++)
         {
             for(k=j+1; k<n; k++)
             {
                 if(i<K && j<K)
                 {
                     if(arr[i]+arr[j]+arr[k]==K)
                     {
                         cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                         break;
                     }
                 }
             }
         }
     }
     return 0;
 }
