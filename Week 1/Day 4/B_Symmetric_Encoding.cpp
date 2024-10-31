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
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        map<char, char> mp;

        auto it = st.begin();
        auto it_end = st.rbegin();

        for (int i = 0; i <= st.size() / 2; i++)
        {
            mp[*it] = *it_end;
            mp[*it_end] = *it;
            it++;
            it_end++;
        }
        string a;
        for (int i = 0; i < n; i++)
        {
            a += mp[s[i]];
        }
        cout << a << endl;
    }
    return 0;
}
