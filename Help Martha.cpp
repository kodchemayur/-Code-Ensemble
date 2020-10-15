// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long int 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10005
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];
void we_have_choices()
{
    string  s;
    cin>>s;
    int x,y;
    cin>>x>>y;
    int q;
    cin>>q;

int l=0,r=0,u=0,d=0;
    for(int i=0;i<s.length();i++)
    {
     if(s[i]=='R')r++;
        else if(s[i]=='L')l++;
        else if(s[i]=='D') d++;
        else u++;
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
         int flag=1;
         int c=0;
         if(a>=x)
         {
            int ans=a-x;
            if(r>=ans)c+=ans;
            else flag=0;
            
            
         }
         if(a<x)
         {
            int ans=x-a;
            if(l>=ans)c+=ans;
            else flag=0;
         }
         if(b>=y)
         {
            int ans=b-y;
            if(u>=ans)c+=ans;
            else flag=0;
            
            

         }
         if(b<y)
         {
            int ans=y-b;
            if(d>=ans)c+=ans;
            else flag=0;
         }
         
         if(!flag)cout<<"NO";
         else cout<<"YES "<<c;
         tr;




    }

}






int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("out.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)we_have_choices();
    return 0;
}
