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
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int ans1 = 0, ans2 = 0, pos = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back();
        int mx = max(left, right);
        if (pos % 2 != 0)
        {
            ans1 += mx;
        }
        else
            ans2 += mx;
        if (mx == left)
        {
            dq.pop_front();
        }
        else
            dq.pop_back();
        pos++;
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}

// another way

// #include <bits/stdc++.h>
// #define int long long
// #define float double
// #define endl '\n'
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int left = 0,right = n - 1;
//     bool s = false, d = true;
//     int s_sum = 0,d_sum = 0;
//     while (left <= right)
//     {
//         if (!s)
//         {
//             if (v[left] >= v[right])
//             {
//                 s_sum += v[left];
//                 left++;
//             }
//             else
//             {
//                 s_sum += v[right];
//                 right--;
//             }

//             s = true;
//             d = false;
//         }
//         else if (!d)
//         {
//             if (v[left] >= v[right])
//             {
//                 d_sum += v[left];
//                 left++;
//             }
//             else
//             {
//                 d_sum += v[right];
//                 right--;
//             }
//             d = true;
//             s = false;
//         }
//     }
//     cout << s_sum << " " << d_sum << endl;
//     return 0;
// }
