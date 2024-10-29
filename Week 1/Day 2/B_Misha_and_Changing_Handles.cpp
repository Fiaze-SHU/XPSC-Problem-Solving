#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, string> first, last;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        if (last.find(a) != last.end())
        {
            string s = last[a];
            first[s] = b;
            last.erase(a);
            last[b] = first[s];
        }
        else
        {
            first[a] = b;
            last[b] = a;
        }
    }
    cout << first.size() << endl;

    for (auto [x, y] : first)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}
