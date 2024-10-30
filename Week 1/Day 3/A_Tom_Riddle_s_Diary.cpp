#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;cin>>n;
     map<string,int>mp;
     for(int i=0;i<n;i++)
     {
        string s;cin>>s;
        if(mp[s]>0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        mp[s]++;
     }
    return 0;
}
