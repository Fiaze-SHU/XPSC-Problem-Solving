#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int knapsack(int idx, vector<int> v, int sum, int sum2, int n)
{
    if (n == idx)
        return abs(sum - sum2);

    int choose = knapsack(idx + 1, v, sum + v[idx], sum2, n);
    int not_choose = knapsack(idx + 1, v, sum, sum2 + v[idx], n);

    return min(choose, not_choose);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << knapsack(0, v, 0, 0, n) << endl;
    return 0;
}
