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
        map<string, vector<int>> first;
        int n;
        cin >> n;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                first[s].push_back(i);
            }
        }

        vector<int> freq(4, 0);

        for (auto [st, vec] : first)
        {
            if (vec.size() == 1)
                freq[vec[0]] += 3;
            if (vec.size() == 2)
            {
                freq[vec[0]]++;
                freq[vec[1]]++;
            }
        }
        for (int i = 1; i <= 3; i++)
        {
            cout << freq[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
alt

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
        map<string, vector<int>> first;
        int n;
        cin >> n;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                first[s].push_back(i);
            }
        }



        int f = 0, sn = 0, t = 0;
        for (auto [s, v] : first)
        {
            if (v.size() == 1)
            {
                if (v[0] == 1)
                    f += 3;
                else if (v[0] == 2)
                    sn += 3;
                else
                    t += 3;
            }
            else if (v.size() == 2)
            {
                for (int i = 0; i < 2; i++)
                {
                    if (v[i] == 1)
                        f++;
                    else if (v[i] == 2)
                        sn++;
                    else
                        t++;
                }
            }
        }
        cout << f << " " << sn << " " << t << endl;
    }
    return 0;
}

*/