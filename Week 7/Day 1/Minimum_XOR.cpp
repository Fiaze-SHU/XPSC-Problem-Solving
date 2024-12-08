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
        vector<int> v(n);
       
        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR = XOR ^ v[i];
        }
        int min=XOR;
        for(int i=0;i<n;i++)
        {
            XOR = XOR ^ v[i];
            if(XOR<min)min=XOR;
             XOR = XOR ^ v[i];
        }
        cout<<min<<endl;
    }
    return 0;
}
