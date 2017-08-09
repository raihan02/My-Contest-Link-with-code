#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m, n;
    char s[1004][1004];
    int tes;
    cin >> tes;
    while(tes--)
    {
        cin >> n >> m;
        ll nm[10003]= {0};
        ll mm[10003]= {0};
        ll arr[10003] = {0};
        for(ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector <ll> vk;
        vk.push_back(0);
        for(ll i = 1; i <= m; i++)
        {
            cin >> nm[i] >> mm[i];

        }
        for(ll i = 1; i <= m; i++)
        {
            vk.push_back(mm[i]);

        }

        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 1; j <= m; j++)
            {
                scanf(" %c", &s[i][j]);
            }
        }
        ll p =  m;

        ll sum = 0;
        ll c = 0;
        set <ll> st;
        int xx,i,j,k;
        for( i = 1; i <= n; i++)
        {
            vector < pair < int, int > > v;
            for( j = 1; j <= m; j++)
            {
                if(s[i][j] == '1')
                {
                    if(arr[i] <= nm[j] && mm[j])
                    {
                        v.push_back(make_pair(nm[j], j));
                    }
                }

            }
            //printf("For iteration %d: \n", i);

            ll mx = 0;
            if(v.size() > 0)
                c++;
            ll pos = 0;
            for( k = 0; k < v.size(); k++)
            {
                //printf("%d %d\n", v[k].first, v[k].second);

                if(v[k].first > mx)
                {
                    mx = v[k].first;
                    pos = v[k].second;
                }
            }
            if(v.size() > 0){
            st.insert(pos);
            mm[pos] = mm[pos] - 1;
            }


            sum += mx;
            v.clear();
        }
        ll cnt = 0;
        set <ll> :: iterator it;



        for(int j = 1; j <= m; j++)
        {
            if(vk[j] == mm[j])
                cnt++;
        }
        cout<<c << " " << sum << " " <<  cnt<< endl;
        vk.clear();

    }
}
/*
1
5 6
50 100 3000 20 10
100 2
200 2
600 1
10 8
1000 9
2000 10
111111
100000
000000
000001
100100



*/
