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
     string s="BAN";
     while(t--) {
        string st="";
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            st+=s;

        }

        int l=0,r=st.size()-1;

        vector<pair<int,int>>ans;

        while(l<r)
        {
            if(st[l]=='B' && st[r]!='B')
            {
                ans.push_back({l+1,r+1});

            }
            l++;
            r--;
        }
        cout<<ans.size()<<endl;
        for(auto i:ans)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
         
     }
    return 0;
}
