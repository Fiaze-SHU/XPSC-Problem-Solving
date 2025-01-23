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
    vector<string> v(n), s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s[i] = v[i];
    }

    int mx = 0;
    vector<string> start, end;
    string mid;

    for (int i = 0; i < n; i++)
    {
        string t = s[i];
        reverse(t.begin(), t.end());

        if (t == s[i] )
        {
            mid = t;
            mx = t.size();
        }
        else if (find(v.begin(), v.end(), t) != v.end())
        {
            start.push_back(s[i]);
            end.push_back(t);
            v.erase(find(v.begin(), v.end(), t));
            v.erase(find(v.begin(), v.end(), s[i]));
        }
    }

    cout << mx + 2 * m * start.size() << endl;

    for (auto i : start)
    {
        cout << i;
    }

    cout << mid;

    reverse(end.begin(), end.end());

    for (auto i : end)
    {
        cout << i;
    }

    cout << endl;

    return 0;
}
