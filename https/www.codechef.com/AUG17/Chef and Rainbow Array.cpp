#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int i,j,n,t,l,k,x;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
 
        x=0,l=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
            if(a[1]==1)
                l=1;
            if(a[i]==7)
                x=1;
 
        }
        int m=n,c=0;
        for(i=1; i<=n/2; i++)
        {
            int y=a[i]+1;
 
            if((a[i]==a[m]))
            {
 
 
                c++;
                m--;
            }
 
        }
        if(c==(n/2)&&l==1&&x==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
 
        memset(a,0,sizeof a);
    }
 
}
 
