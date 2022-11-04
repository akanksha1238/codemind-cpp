#include<iostream>
using namespace std;
int main()
{
    int n,m,c,l=0,s=0;
    cin>>n;
    cin>>m;
    s=n+m;
    for(int i=s+1;i<=s+100000;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
            
        }
        if(c==2)
        {
            cout<<i-s;
            break;
        }
    
        
    
    }
    
}