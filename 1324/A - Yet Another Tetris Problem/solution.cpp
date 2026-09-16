#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        bool flag = true;
        for(int i = 0; i < n-1; i++)
        {
            if((a[n-1]-a[i])%2 != 0)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES
" : "NO
");
    }
    return 0;
}