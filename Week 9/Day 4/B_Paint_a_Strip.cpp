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

        for(int i =1 , len=1;;i++,len=len*2+2)
        {
            if(len>=n)
            {
                cout<<i<<endl;
                break;
            }


        }
    }
    return 0;
}
