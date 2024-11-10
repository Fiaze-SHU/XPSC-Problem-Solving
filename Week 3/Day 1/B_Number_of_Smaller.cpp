#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int l = 0;
    int cnt = 0;
    int r = 0;
    while (l < m)
    {
        if (r < n && v[r] < v2[l])
        {
            cnt++;
            r++;
           
        }
        else
        {
            l++;
              cout << cnt << " ";
        }

       
    }
    cout << endl;
    return 0;
}
