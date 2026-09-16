#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long x = 0, y = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a == -1)
        {
            if(x > 0) x--;
            else y++;
        }
        else
            x += a;
    }
    cout << y << '
';
    return 0;
}