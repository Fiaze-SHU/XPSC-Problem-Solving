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
        vector<int> v(n);
        int x = -1, y = -1;
        map<int,int>mp;
        set<int>st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]=max(mp[v[i]],i+1);
            st.insert(v[i]);
        }
       
       
        int mx=-1;
        for(auto i:st)
        {
            for(auto j:st)
            {
                if(__gcd(i,j)==1)
                {
                    mx = max(mp[i]+mp[j],mx);

                }

            }
        }
        cout<<mx<<endl;
        
    }
    return 0;
}
