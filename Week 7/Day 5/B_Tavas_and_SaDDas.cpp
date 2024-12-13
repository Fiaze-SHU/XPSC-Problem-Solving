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

    string t = to_string(n);
    int l = t.size();
    vector<string> ans;

    for (int i = 0; i < (1 << l); i++)
    {
        string u = "";
        for (int k = 0; k < l; k++)
        {
            if ((i >> k) & 1)
            {
                u += '7';
            }
            else
            {

                u += '4';
            }
        }
        ans.push_back(u);
    }

    sort(ans.begin(), ans.end());

    int cnt = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (t == ans[i])
        {
            cnt = i + 1;
            break;
        }
    }

    for (int i = 1; i < l; i++)
    {
        cnt += (1 << i);
    }
    cout << cnt << endl;

    return 0;
}
