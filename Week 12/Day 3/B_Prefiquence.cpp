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
        int n, m;
        cin >> n >> m;
        string v, b;
        cin >> v >> b;

        int l = 0,r=0, cnt = 0;

        while(r<m)
        {
            if( l<n && v[l]==b[r])
            {
                l++;
                cnt++;
            }
            r++;
        }

        
        cout << cnt << endl;
    }
    return 0;
}
