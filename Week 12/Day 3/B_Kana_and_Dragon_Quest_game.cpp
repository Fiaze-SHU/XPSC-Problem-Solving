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
        int x, n, m;
        cin >> x >> n >> m;

       

        for (int i = 1; i <= n; i++)
        {
            if (x <= 0)
                break;
                if(x<=(x / 2) + 10)break;

            x = (x / 2) + 10;
        }
         for (int i = 0; i < m; i++)
        {
            if (x <= 0)
                break;
            x -= 10;
        }
        
        // cout<<x<<endl;
        
        if (x <= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
