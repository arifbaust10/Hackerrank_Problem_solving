#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,i,j,x,y,apple=0,orange=0;
    cin>>s>>t>>a>>b>>m>>n;
    if(a<=s && b>=t)
   {
        int dis_m[m],dis_n[n];
    for(i=0;i<m;i++)
    {
        cin>>x;
        dis_m[i]=(a+x);
    }
    for(i=0;i<n;i++)
    {
        cin>>y;
        dis_n[i]=(b+y);
    }
    for(i=0;i<m;i++)
    {
        if(dis_m[i]>=s && dis_m[i]<=t)
            apple++;
    }
    for(i=0;i<n;i++)
    {
        if(dis_n[i]>=s && dis_n[i]<=t)
            orange++;
    }
    cout<<apple<<endl<<orange;
   }
}
