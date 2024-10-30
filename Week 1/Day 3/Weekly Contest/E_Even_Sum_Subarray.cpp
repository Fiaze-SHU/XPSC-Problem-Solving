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
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        if(sum%2==0)cout<<n<<endl;
        else
        {
            int st=0;
            int a=-1;
            for(int i=0;i<n;i++)
            {
                st+=v[i];
                if(st%2!=0)
                {
                    a=i+1;
                    break;
                }


            }
            st=0;

            int b=-1;
            for(int i=n-1;i>=0;i--)
            {
                st+=v[i];
                if(st%2!=0)
                {
                    b=n-i;
                    break;
                }


            }
            cout<<max(n-a,n-b)<<endl;
        }

    }
    return 0;
}
