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
        int a, b, x;
        cin >> a >> b;
        x = (a%b != 0) ? b-(a%b) : 0;
        cout << x << '
';
    }
    return 0;
}