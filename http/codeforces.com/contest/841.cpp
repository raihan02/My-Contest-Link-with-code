#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        map <char , int > mp;

        char ch;

        set <char > st;


        for(int i = 0; i < a; i++)
        {
            cin >> ch;

            if(mp.count(ch) == 0)
                mp[ch] = 1;
            else
                mp[ch] = mp[ch] + 1;
            st.insert(ch);
        }


        set <char> :: iterator it;
        set<int> st1;
        int f = 0;
        for(it = st.begin(); it != st.end(); it++)
        {
            if(mp[*it] >  b)
            {
                f = 1;
                break;
            }
        }
        if(f)
            cout<<"NO"<< endl;
        else
            cout<<"YES"<< endl;


    }


}
