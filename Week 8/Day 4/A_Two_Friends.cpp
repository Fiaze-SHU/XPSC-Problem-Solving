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
        cin >> n;
        vector<int> v(n), sum(n);
        vector<pair<int,int>>vp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum[i] = i + 1 + v[i];
            vp[i]={sum[i],i+1};
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n && j!=i;j++)
            {
                if(sum[i]==sum[j])
                {
                    if(sum[i]-vp[i].second==vp[j].second)
                    {
                        flag=true;
                        break;
                    }
                }

            }
        }
        if(flag)cout<<2<<endl;
        else cout<<3<<endl;
        // for(auto i:vp)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
       
    }
    return 0;
}
