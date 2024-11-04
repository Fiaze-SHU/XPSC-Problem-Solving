#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;cin>>s>>t;
    int cnt=0;
    for(int i=0;i<t.size();i++)
    {
        if(i<s.size() && s[i]!=t[i])cnt++;
        if(i>=s.size())cnt++;

    }
    cout<<cnt<<endl;
    return 0;
}
