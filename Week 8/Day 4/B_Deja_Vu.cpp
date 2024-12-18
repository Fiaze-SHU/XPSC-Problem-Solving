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
        int n, q;
        cin >> n >> q;
        vector<int> v(n), v2, freq(31, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            if (freq[x] == 0)
            {
                v2.push_back(x);
                freq[x]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:v2)
            {
                if(v[i] % (1<<it)==0)
                {
                    it--;
                    v[i]+=(1<<it);
                }
            }
        }
        for(auto i:v)
        {
            cout<<i<<" ";
        }cout<<endl;
    }
    return 0;
}
