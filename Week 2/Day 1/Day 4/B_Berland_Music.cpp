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
        vector<int> vec(n);
        map<int, int> mp;
        
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        string s;
        cin >> s;

        vector<int> s1, s0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                s1.push_back(vec[i]);
            else
                s0.push_back(vec[i]);
        }

        sort(s0.begin(), s0.end(), greater<int>());
        sort(s1.begin(), s1.end(), greater<int>());

      
        int end = n;
        for (int x : s1)
        {
            mp[x] = end;
            end--;
        }
        for (int x : s0)
        {
            mp[x] = end;
            end--;
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[vec[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}
