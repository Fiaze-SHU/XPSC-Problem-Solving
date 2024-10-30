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
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        b= b+';';
        a = '#'+a;
        mp[b] = a;
    }
    for (int i = 0; i < m; i++)
    {
        string x, y;
        cin >> x >> y;
        cout << x << " " << y << " " << mp[y] << endl;
    }
    return 0;
}
