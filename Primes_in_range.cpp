#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    int s=0;
    cin>>n;
    cin>>m;
    for(int i=n;i<=m;i++)
    {
        int c=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0 and i!=1 and i!=0)
        s++;
    }
    cout<<s;
}