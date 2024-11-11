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
        vector<vector<int>> ar(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
            }
        }

        int number;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[ar[i][0]]++;

            // cout<<ar[i][0]<<endl;

            if (mp[ar[i][0]] == n - 1)
            {
                number = ar[i][0];
            }
        }

        map<int, int> mpp;
        vector<int> ans;
        ans.push_back(number);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (ar[j][i] != number && mpp[ar[j][i]] <= 0)
                {
                    mpp[ar[j][i]]++;
                    ans.push_back(ar[j][i]);
                }
            }
        }

        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
