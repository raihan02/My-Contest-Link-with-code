///Problem A
#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int main(){

    string s1, s2;
    cin >> s1 >> s2;
    
    if(s1 == s2)
        cout<<"-1"<< endl;
    else
        cout<<max(s1.length(),s2.length())<< endl;
}

///Problem B
#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int lcs[1001][1001];
int arr[10001];
int main(){

    int n ,j ;
    scanf("%d", &n);

     for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
    {
        j = arr[i] + arr[i+1];
        if(j > arr[i+2]&& i < n - 2)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
}
Contest link: http://codeforces.com/contest/766
