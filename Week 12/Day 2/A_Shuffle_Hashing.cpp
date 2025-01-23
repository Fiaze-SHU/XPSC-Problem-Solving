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
        string s, h;
        cin >> s >> h;
        sort(s.begin(), s.end());

        int l = 0, r = 0;
        bool flag = false;

        while (r < h.size())
        {

            if (r - l + 1 == s.size())
            {
                // cout<<r <<endl;
                string found = "";
                for (int i = l; i <= r; i++)
                {
                    found += h[i];
                }
                
                sort(found.begin(), found.end());
                // cout<<found<<endl;
                if (found == s)
                {
                    // cout<<found<<" "<<s<<endl;
                    flag = true;
                    break;
                }

                l++;
            }
            r++;
        }
        // cout<<s<<endl;
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
