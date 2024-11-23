#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--) {
         int n,k;
             cin>>n>>k;
             vector<int>a(n);
             for(int i=0;i<n;i++)
             {
                 cin>>a[i];
             }
             vector<int>h(n);
             for(int i=0;i<n;i++)
             {
                 cin>>h[i];
             }

             int l=0,r=1,sum=a[0],ans=0;

             if(a[0]<=k)ans=1;

             while(r<n)
             {
                if(h[r-1]%h[r]==0)
                {
                    sum += a[r];
                }
                else
                {
                    sum = a[r];
                    l=r;
                }
                while(sum>k)
                {
                    sum-=a[l];
                    l++;
                }
                ans = max(ans,r-l+1);
                r++;
             }
             cout<<ans<<endl;


     }

    return 0;
}
