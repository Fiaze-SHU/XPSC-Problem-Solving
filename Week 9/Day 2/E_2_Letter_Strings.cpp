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
        vector<string> v(n);
        map<string, int> freq;
        map<char, int> fst, sec;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
            fst[v[i][0]]++;
            sec[v[i][1]]++;
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += (0ll, fst[v[i][0]]-freq[v[i]]);
            ans += (0ll,sec[v[i][1]]-freq[v[i]]);

            if(freq[v[i]]>0)freq[v[i]]--;
            if(fst[v[i][0]]>0)fst[v[i][0]]--;
            if(sec[v[i][1]]>0)sec[v[i][1]]--;

        }
        cout<<ans<<endl;
    }
    return 0;
}
