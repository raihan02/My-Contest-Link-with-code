#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int i,j,n,t,l,k,x;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
       string s1, s2;
       cin >> s1 >> s2;

       if(s1 == s2)
       {
           cout<< 'B' << endl;
           continue;
       }


       int arr[130], arr2[130];
       set <char> st, st1, st2;
       memset(arr, 0, sizeof arr);
       memset(arr2, 0, sizeof arr2);
        vector <char > kk;
       for(int i = 0; i < s1.size(); i++)
       {
           arr[s1[i]]++;
           arr2[s2[i]]++;
           st1.insert(s1[i]);
           st2.insert(s2[i]);

       }
       for(int i = 97; i <= 122; i++)
       {
           if(arr[i] >= 2)
           {
               kk.push_back(i);
           }
       }
       int cnt = 0;

       string p = s2;
       sort(p.begin(), p.end());
       for(int i = 0; i < kk.size(); i++)
       {
           bool ch = binary_search(p.begin(), p.end(), kk[i]);
           if(ch == false)
           {
               cnt = 1;

           }
       }

       if(cnt == 1 && kk.size() >= 1){
        cout<<'A'<< endl;
           continue;
       }

       if(st1.size() >   st2.size() )
       {
           //cout<<"Check"<< endl;
           set <char> :: iterator it;
           string s1, s2;
           for(it = st1.begin(); it != st1.end(); it++)
           {
               s1 += *it;
           }
           for(it = st2.begin(); it != st2.end(); it++)
           {
               s2 += *it;
           }
           int cnt = 0;
           for(int i = 0; i < s2.size(); i++)
           {
               bool p = binary_search(s1.begin(),s1.end(), s2[i]);
               if(p == true)
                cnt++;
           }
            int f = 0;
           if(cnt == s2.size())
           {


              for(int i = 0; i < s2.size(); i++)
              {
                  if(arr2[s2[i]] >= 2)
                  {
                      if(arr[s2[i]] < arr2[s2[i]])
                      {
                          f = 1;
                          break;
                      }
                  }
              }
           }

           if(f == 1)
            cout<<"A"<< endl;
           else
            cout<<"B"<< endl;
           s1.clear();
           s2.clear();
           st1.clear();
           st2.clear();
           continue;
       }



       for(int i = 0; i < s2.size(); i++)
       {
           st.insert(s2[i]);
       }
       if(st.size() == 1)
       {
           char ch =  *st.begin();
           string sp = s1;
           sort(sp.begin(), sp.end());

           bool t = binary_search(sp.begin(), sp.end(), ch);

           if(t == true){
            cout<<"A"<< endl;
           continue;
           }
       }



        cout<<'B'<< endl;
       kk.clear();
       p.clear();

    }

}
// https://www.codechef.com/AUG17/
