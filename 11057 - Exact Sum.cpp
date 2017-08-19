#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
     int tes;
     while(cin >> tes)
     {
         memset(arr, 0, sizeof arr);
         for(int i = 0; i < tes; i++)
         {
             cin >> arr[i];
         }
         int k;
         cin >> k;
         sort(arr, arr + tes);
         vector <pair <int , int > > v;
         for(int i = 0; i < tes; i++)
         {
             int x = arr[i];
             bool bb =  binary_search(arr, arr + tes, k - x);
             if(bb == true)
             {
                 v.push_back(make_pair(x, k - x));
                 arr[i] = -1;
             }
         }
         int mn = 99999999, x , y;

         for(int i = 0; i < v.size(); i++)
         {
             if(mn > abs(v[i].first - v[i].second) )
             {
                 mn = abs(v[i].first - v[i].second);
                 x = v[i].first;
                 y = v[i].second;
             }
         }

         printf("Peter should buy books whose prices are %d and %d.\n\n",x,y);
         v.clear();
     }


}
