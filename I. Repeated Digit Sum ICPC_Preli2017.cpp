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
int main()
{
    int tes,p=0;
    scanf("%d", &tes);

    while(tes--)
    {
        p++;
        string s1, s2;
        cin >> s1 >> s2;
        long sum = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            sum += s1[i] - 48;
        }
        int t=0;

        while(1)
        {



            while(sum!=0)
            {

                t=t+(sum%10);

                sum=sum/10;

            }

            if(t/10==0)

                break;

            else
            {

                sum=t;

                t=0;

            }

        }
        int d = 0, ans= 0;
        for (int j = 0; j<s2.size(); j++)
        {


            d = d*10 + (s2[j]-'0');
            d = d%6;
        }
        //cout<<d<< endl;

        //cout<<"A = " << t << endl;

        if(t == 0)
        {
            ans = 0;
        }
        else if(t == 1 || s2 == "0")
        {
            ans = 1;
        }
        else if(s2 == "1")
        {
            ans = t;
        }
        else if(t == 2)
        {
            d = 0;
            for (int j = 0; j<s2.size(); j++)
            {


                d = d*10 + (s2[j]-'0');
                d = d%6;
            }
            if(d == 0)
                ans = 1;
            else if(d ==1)
                ans = 2;
            else if(d == 2)
                ans = 4;
            else if(d == 3)
                ans = 8;
            else if(d == 4)
                ans = 7;
            else if(d == 5)
                ans = 5;
        }
        else if(t == 3)
        {
            if(s2 == "0")
                ans = 1;
            else if(s2 == "1")
                ans = 3;
            else
                ans = 9;
        }
        else if(t ==  4)
        {
            d = 0;
            for (int j = 0; j<s2.size(); j++)
            {


                d = d*10 + (s2[j]-'0');
                d = d%3;
            }
            if(d == 0)
                ans = 1;
            else if(d ==1)
                ans = 4;
            else if(d == 2)
                ans = 7;

        }
        else if(t == 5)
        {
             d = 0;
            for (int j = 0; j<s2.size(); j++)
            {


                d = d*10 + (s2[j]-'0');
                d = d%6;
            }
             if(d == 0)
                ans = 1;
            else if(d ==1)
                ans = 5;
            else if(d == 2)
                ans = 7;
            else if(d == 3)
                ans = 8;
            else if (d == 4)
                ans = 4;
            else if (d == 5)
                ans = 2;
        }
        else if(t == 6)
        {
            if(s2 == "0")
                ans = 1;
            else if(s2 == "1")
                ans = 6;
            else
                ans = 9;
        }
        else if(t == 7)
        {
             d = 0;
            for (int j = 0; j<s2.size(); j++)
            {


                d = d*10 + (s2[j]-'0');
                d = d%3;
            }
             if(d == 0)
                ans = 1;
            else if(d ==1)
                ans = 7;
            else if(d == 2)
                ans = 4;

        }
          else if(t == 8)
        {
             d = 0;
            for (int j = 0; j<s2.size(); j++)
            {


                d = d*10 + (s2[j]-'0');
                d = d%2;
            }
             if(d == 0)
                ans = 1;
            else if(d ==1)
                ans = 8;

        }
        else if(t == 9)
        {
            ans = 9;
        }
        printf("Case %d: %d\n",p, ans);

    }
}
