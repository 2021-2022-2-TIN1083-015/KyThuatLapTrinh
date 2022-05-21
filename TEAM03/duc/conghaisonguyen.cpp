#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

string reverse(string s)
{
    string res = "";
    int l = s.length();
    for (int i = l - 1; i >= 0; --i) res.push_back(s[i]);
    return res;
}

string string_sum(string a, string b)
{
    string res = "";

    int i = 0, j = 0;
    int c = 0;

    a = reverse(a);
    b = reverse(b);

    while (a[i] != 0 && b[j] != 0) 
    {
        int s = a[i] - '0' + b[i] - '0' + c;
        if (s >= 10)
        {
            c = 1;
            res.push_back('0' + s - 10);
        }
        else
        {
            c = 0;
            res.push_back('0' + s);
        }
        ++i; ++j;
    }

    while (a[i] != 0)
    {
        int s = a[i] - '0' + c;
        if (s >= 10)
        {
            c = 1;
            res.push_back('0' + s - 10);
        }
        else
        {
            c = 0;
            res.push_back('0' + s);
        }
    }

    while (b[i] != 0)
    {
        int s = b[i] - '0' + c;
        if (s >= 10)
        {
            c = 1;
            res.push_back('0' + s - 10);
        }
        else
        {
            c = 0;
            res.push_back('0' + s);
        }
    }

    if (c == 1) res.push_back('1');
    return reverse(res);
}
int main()
{
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Phan Trung Duc\n");
    LOG_IT("Msv: 21T1080008\n");
    LOG_DT("-----\n");
    string a,b,c,d,m="",n="";
    LOG_DT("Nhap so a: "); getline (cin,a);
    LOG_DT("Nhap so b: "); getline (cin,b);
     LOG_WT("Tong so:");
    int x,y,max;
    x=a.size();
    y=b.size();
    if (x>=y)
    {
        c=b;
        for (int i=0;i<x-y;i++)
            m+='0';
        c=m+c;
        d=a;
        max=x;
    }
    else
    {
        c=a;
        for (int i=0;i<y-x;i++)
            n+='0';
        c=n+c;
        d=b;
        max=y;
    }
    int e[max];
    int du=0,q,p;
    for (int i=max-1;i>=0;i--)
    {
        p=c[i]-'0';
        q=d[i]-'0';
        if (p+q+du<=9)
        {
            e[i]=p+q+du;
            du=0;
        }
        else
        {
            e[i]=(p+q+du)%10;
            du=1;
        }
    }
    if (du==0)
        for (int i=0;i<max;i++)
            cout<<e[i];
    else
    {
        long long k[max+1];
        k[0]=1;
        for (int i=0;i<max;i++)
            k[i+1]=e[i];
        for (int i=0;i<=max;i++)
            cout<<k[i];
    }
    return 0;
}