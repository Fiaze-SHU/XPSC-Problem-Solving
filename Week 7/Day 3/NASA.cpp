#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
const int maxN = (1 << 15);

vector<int> palindrome;

bool isPalindrome(int n)
{
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void Palindromes()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            palindrome.push_back(i);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Palindromes();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
       
        cin >> n;
        vector<int> v(n), cnt(maxN + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

         int ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {
                int cur = (v[i] ^ palindrome[j]);

                ans += cnt[cur];
            }
        }
        cout << ans/2 << endl;
    }
    return 0;
}
