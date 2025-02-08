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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        if(v[0] != v[1])cout<<"YES"<<endl;
        else
        {
            bool flag = false;

            for(int i=1;i<n;i++)
            {
                if(v[i] % v[0] != 0)
                {flag=1;break;}
            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
