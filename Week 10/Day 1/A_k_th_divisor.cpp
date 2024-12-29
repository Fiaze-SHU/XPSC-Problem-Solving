#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;cin>>n>>k;
    vector<int>divisor;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
            if(n/i!=i)divisor.push_back(n/i);
        }

    }
    sort(divisor.begin(),divisor.end());
    if(divisor.size()<k)cout<<-1<<endl;
    else cout<<divisor[k-1]<<endl;

    return 0;
}
