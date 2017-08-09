#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10001];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
     int sum = 0;
    for(int i = 0; i < n; i+= 2)
    {
        sum += arr[i + 1] - arr[i];
    }
    cout<<sum<< endl;



}
