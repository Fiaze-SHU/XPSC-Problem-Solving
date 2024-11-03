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
         cin>>n;
         multiset<int>ml;
         for(int i=0;i<n;i++)
         {
            int x;
             cin>>x;
             ml.insert(x);
         }
         int ans=0,problem=1;

         while(!ml.empty())
         {
            auto lb = ml.lower_bound(problem);
            if(lb !=ml.end())
            {
                ans++;
                problem++;
                ml.erase(lb);
            }
            else break;
         }
         cout<<ans<<endl;
    return 0;
}




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
//     sort(v.begin(), v.end());

//     int day = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] > day)
//             day++;
//     }
//     cout << day << endl;
//     return 0;
// }
