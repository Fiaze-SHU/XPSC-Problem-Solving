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
    vector<int> v(n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
 sort(v.begin(),v.end());
 for(int i=0;i<n;i++)
 {
    if(v[i]%2!=0)
    {
        sum-=v[i];
        break;
    }
 }
 cout<<sum<<endl;
    }
   
    return 0;
}
