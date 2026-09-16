#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n], mn = 2e9, mni = n, mx = -2e9, mxi = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(mn >= a[i])
        {
            mn = a[i];
            mni = i;
        }
        if(mx < a[i])
        {
            mx = a[i];
            mxi = i;
        }
    }
    cout << ((mxi < mni) ? mxi+(n-mni-1) : mxi+(n-mni-2)) << '
';
    return 0;
}