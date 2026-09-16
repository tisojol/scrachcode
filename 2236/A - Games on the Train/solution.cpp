#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n);
        int k = a[n-1] - a[0];
        (k == 0) ? cout << 1 << '
' : cout << k+1  << '
';
    }
    return 0;
}