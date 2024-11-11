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

     vector<string>v;
     map<string,int>mp;

    for(int i=0;i<t;i++)
    {
        string s;cin>>s;
        v.push_back(s);
    }
    vector<char>ans;
    for(int i=t-1;i>=0;i--)
    {
        if(mp[v[i]]<=0)
        {
            for(int j=v[i].size()-2;j<v[i].size();j++)
            {
                ans.push_back(v[i][j]);
            }
            mp[v[i]]++;

        }

    }
    for(auto i:ans)
    {
        cout<<i;
    }cout<<endl;
    return 0;
}
