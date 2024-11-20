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
        string s;
        cin >> s;
        char st = s[0];
        char ed = s[s.size() - 1];

        vector<int> v;

        map<char, queue<int>> mp;
        for (int i = 0; i < s.size(); i++)
        {
            
            mp[s[i]].push(i+1);
            // cout<<mp[s[i]]<<" ki "<<s[i]<<endl;
        }
        if (st < ed)
            sort(s.begin(), s.end());
        else if (st > ed)
            sort(s.begin(), s.end(), greater<char>());

        for (int i = 0; i < s.size(); i++)
        {
            if (st >= s[i] && ed <= s[i] || st <= s[i] && ed >= s[i])
            {
                v.push_back(mp[s[i]].front());
                mp[s[i]].pop();
            }
        }
        cout << abs((st - 'a') - (ed - 'a')) << " " << v.size() << endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
