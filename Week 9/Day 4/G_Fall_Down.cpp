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
        int n,m;cin>>n>>m;
        
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int k=0;k<=n;k++)
        {
            for(int i=n-2;i>=0;i--)
            {
                for(int j=0;j<m;j++)
                {
                    if(s[i][j]=='*' && s[i+1][j]=='.')
                    {
                        swap(s[i][j],s[i+1][j]);
                    }
                }
            }
        }
        for(auto i:s)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
