#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz";
    int n;
    cin >> n;
    string ans = "";
    while (n > 0)
    {
        for (int i = 0; i < 52; i++)
        {
            if (n == 0)
                break;
            ans += s[i];
            n--;
        }
    }
    cout << ans << endl;

    return 0;
}
