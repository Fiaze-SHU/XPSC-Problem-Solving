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
    cin >> t;
    while (t--)
    {
        int n;
            cin>>n;
            vector<int>v(n);
            map<int,int>mp;
            int mx=0,sum=0;
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
                mp[v[i]]++;
                sum+=v[i];
                if(mp[v[i]]>mx)mx=mp[v[i]];
            }
            bool flag=true;
            // cout<<sum<<endl;
            for(int i=0;i<n;i++)
            {
                if(v[i]==1)sum-=2;
                else sum-=1;
                if(sum<0)flag=false;
                // cout<<sum<<endl;
            }
            // if(flag)cout<<"GHGGG"<<endl;
            if(!flag || n==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            
        
    }
    return 0;
}
