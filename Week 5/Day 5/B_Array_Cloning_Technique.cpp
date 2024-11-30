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
         int n;
             cin>>n;
             vector<int>v(n);
             map<int,int>mp;
             int mx=0;
             for(int i=0;i<n;i++)
             {
                 cin>>v[i];
                 mp[v[i]]++;
                 if(mp[v[i]]>mx)mx=mp[v[i]];
             }
             int cnt=0;
             int rem = n-mx;

             while(true)
             {
                if(rem<=0)break;

                if(rem>0)cnt++;
                
                cnt+=min(mx,rem);
                rem-=mx;
                mx+=mx;
             }
             cout<<cnt<<endl;
             
     }
    return 0;
}
