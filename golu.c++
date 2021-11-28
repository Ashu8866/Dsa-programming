#include <bits/stdc++.h>
using namespace std;


{
  int minXOR(int arr[], int n)
{
    int min_xor = INT_MAX; 
 
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
 
            min_xor = min(min_xor, arr[i] ^ arr[j]);
 
    return min_xor;
}
int main()
{
    int arr[] = { 9, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minXOR(arr, n) << endl;
    return 0;
}