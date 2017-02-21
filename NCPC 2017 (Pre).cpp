I Number 
#include <bits/stdc++.h>
using namespace std;
int vis[150];
vector <int>  vertex[150];
void dfs(int u)
{
    vis[u] = 1;
    for(int i = 0; i < vertex[u].size(); i++)
    {
        if(vis[vertex[u][i]] == -1)
        {
            dfs(vertex[u][i]);
        }
    }
}
int main()
{
    int tes ,o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        memset(vis, -1, sizeof vis);
        int n , m;
        scanf("%d %d", &n, &m);
        for(int i = 0; i < m; i++)
        {
            int a, b;
            scanf("%d %d",&a, &b);
            vertex[a].push_back(b);
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            memset(vis ,-1,sizeof vis);
            for(int j = 0; j < vertex[i].size(); j++)
            {
                dfs(vertex[i][j]);
            }
            if(vis[i] == -1)
                cnt++;
        }
        printf("Case %d: %d\n", o, cnt);
    }



}


F Number 
#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int tes, o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Case %d:\n",o);
        int q;
        scanf("%d", &q);
        int t = 0;
        while(q--)
        {
            t++;
            long long nim = 0 ,k;
            scanf("%lld", &k);
            for(int j = 0; j < n; j++)
            {
                nim^=(arr[j]%(k+1));
            }
            printf("Query %d: ", t);
            if (!nim) printf("Lose\n");
            else
               printf("Win\n");
        }
    }
