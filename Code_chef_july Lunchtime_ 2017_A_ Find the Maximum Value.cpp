#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;
typedef long long int ll;
int main()
{
   int tes;
   string s;
   cin >> tes;
    getchar();
   while(tes--)
   {
      getline(cin , s);
      ll arr[51];
      vector<ll> v;
     string s2 = "";
      for(int i = 0; i < s.size(); i++)
      {

          if(s[i] == ' ')
          {
              break;
          }
          s2+= s[i];
      }
      ll res =0;
      for(int i = 0; i < s2.size(); i++)
      {
          res = res * 10 + s[i] -48;
      }
      s2.clear();
      v.push_back(res);

      for(int i = 0; i < s.size(); i++)
      {
          if(s[i] == ' ')
          {
              int p = i + 1;
              ll res = 0;
              while(isdigit(s[p]))
              {
                  res = res * 10 + s[p] - '0';
                  p++;
              }
              v.push_back(res);
          }
      }
       int cnt = v.size() - 1;

       ll mx  =-1;

        int f = 0;
       for(int i = 0; i < v.size(); i++)
       {

           if(v[i] == cnt && f == 0){
            f = 1;
            continue;

           }

           if(mx < v[i])
            mx = v[i];
       }
       cout<<mx<< endl;
       v.clear();

   }

}
//https://www.codechef.com/LTIME50/problems/LOSTMAX
