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
     map<int,int>mp;
int cnt=0;
     for(int i=0;i<n;i++)
     {
        int x;cin>>x;
        mp[x]++;
        cnt=max(mp[x],cnt);
     }
     cout<<cnt<<endl;
    return 0;
}
