//Tester of Programming
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define gamma 0.57721566490153286060651209008240243
#define pi acos(-1.0)//also pi=M_PI, pi/2=M_PI_2 and pi/4=M_PI_4
//cos inverse (-1)=180 degree. So, 180(in degree)=pi (in radian value)
#define cos(a) (cos(a*pi/180.0))
#define sin(a) (sin(a*pi/180.0))
#define tan(a) (tan(a*pi/180.0))
#define cosi(a) (acos(a)*180.0/pi)
#define sini(a) (asin(a)*180.0/pi)
#define tani(a) (atan(a)*180.0/pi)
#define tanii(a,b) (atan2(a,b)*180.0/pi)//tan(90) = Infinity or a/0
// log(a)=ln(a) base 2.718281828459044979,, log10(a) base 10;
#define powe(a) exp(a)//e^a
//Extended Geometry
#define dis(x1,y1,x2,y2) sqrt(pow((x1-x2),2)+pow((y1-y2),2))
#define t_area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
#define t_angle(a,b,c) cosi((b*b+c*c-a*a)/(2*b*c))
//a,b,c, must be double type or in variable declaration a=3.0
using namespace std;

long gcd(long g,long a)
{
    if(g%a==0)return a;
    else return gcd(a,g%a);
}
/*
s.length() // s.substr(0=start,n=Number of Char)// reverse(s.begin(),s.end())
*/
/*  freopen ("AHP_Final_Input.txt","r",stdin); fclose(stdin);
 freopen ("AHP_Final_Output.txt","w",stdout); fclose (stdout);*/
int arr[11][11] = {0},arr2[11][11] = {0};
int main()
{
    //cout.precision(20);
    long t,p=1;

    scanf("%ld",&t);

    while(p<=t)
    {
        int n;



        scanf("%d", &n);

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                scanf("%d", &arr[i][j]);
                arr2[j][i]= arr[i][j];
            }
        }

        if(n <= 4)
        {
            printf("Case %d: 0\n",p);
            p++;
            continue;
        }

        set <int> st1, st2;
        int cnt = 0, cnt2 = 0;
        for(int k = 1; k <= n - 4; k++)
        {
            for(int i = 1; i <= n-1; i++)
            {

                for(int j = k; j <= k + 4; j++)
                {
                    st1.insert(arr[i][j]);
                    st1.insert(arr[i + 1][j]);
                    st2.insert(arr2[i + 1][j]);
                    st2.insert(arr2[i][j]);

                   //  cout<<i  << " " << j << " " <<i + 1 << " " << j << endl;

                }
                 //cout<<"New"<< endl;
                if(st1.size() == 10)
                {
                    cnt++;
                   // cout<<"+1\n";
                }
                if(st2.size() == 10)
                    cnt++;

                st1.clear();
                st2.clear();

            }
           // cout<<"new2\n";

        }
        set <int> st3, st4;
        if(n == 10)
        {
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= n; j++)
                {
                   st3.insert(arr[i][j]);
                    st4.insert(arr2[i][j]);
                }
                if(st3.size() == 10 )
                    cnt++;
                    if(st4.size() == 10)
                        cnt++;
                st3.clear();
                st4.clear();
            }

        }
        printf("Case %d: %d\n",p,cnt);
        p++;
        st3.clear();
        st1.clear();
        st2.clear();
        st4.clear();

    }
    return 0;
}
