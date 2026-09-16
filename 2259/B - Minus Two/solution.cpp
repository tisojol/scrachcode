#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], on = 0, x = 0, y = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2 != 0) on++;
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i]%2 == 0)
            {
                if(a[i]%4 == 0)
                    x++;
                else y++;
            }
        }
        int ans = max({on, x, y});
        cout << ans << '
';
    }
    return 0;
}