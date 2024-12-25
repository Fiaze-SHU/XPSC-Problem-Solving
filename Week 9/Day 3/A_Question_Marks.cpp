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
        int n;cin>>n;
        string s;cin>>s;
        map<char,int>mp;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(s[i]=='A' && mp[s[i]]<=n)cnt++;
            if(s[i]=='B' && mp[s[i]]<=n)cnt++;
            if(s[i]=='C' && mp[s[i]]<=n)cnt++;
            if(s[i]=='D' && mp[s[i]]<=n)cnt++;

        }
        cout<<cnt<<endl;
    }
    return 0;
}
