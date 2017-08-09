#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[200];
int main()
{
    int i,j,n,t,l,k,x;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
       ll n , p;
       cin >> n >> p;
       ll sum = 0;
       ll arr[100004];
       memset(arr, 0, sizeof arr);
       for(int i = 1; i <= n; i++)
         {
             ll x;
             cin >> x;
             arr[i]= x;
           sum += x;
         }
         if(sum % n != 0)
         {
             cout<<-1<< endl;
             continue;
         }
         ll x= sum / n;
         ll cnt = 0;
         vector <ll> v;
         for(int i = 1; i <= n - p; i++)
         {
            int j = p + i;
            if(arr[i] < x)
            {
                ll xl = x - arr[i];
                    cnt+= xl;
 
                arr[i] = arr[i] + (xl);
                arr[j] = arr[j] - (xl);
 
            }
            else if(arr[i] > x)
            {
                ll xl = arr[i] - x;
                  cnt += xl;
                  arr[i] = arr[i] - xl;
                  arr[j] = arr[j] + xl;
 
            }
         }
 
         set <ll> st;
         for(int i = 1; i <= n; i++)
         {
             st.insert(arr[i]);
         }
          if(st.size() != 1 && *st.begin() != x)
            cout<<-1<< endl;
            else
                cout<< cnt << endl;
            st.clear();
    }
 
}
