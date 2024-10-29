#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<pair<string, string>, bool> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        mp[{a, b}] = true;
    }
    cout << mp.size() << endl;
    return 0;
}

/*
another one:

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
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }
    sort(v.begin(), v.end());
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {

        if (!((v[i].first == v[i - 1].first) && (v[i].second == v[i - 1].second)))
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

*/