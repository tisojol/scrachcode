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
        int a, b, c;
        cin >> a >> b >> c;
        if(a >= b && a >= c)
            cout << (((b+c) == a) ? "YES
" : "NO
");
        else if(b >= a && b >= c)
            cout << (((a+c) == b) ? "YES
" : "NO
");
        else
            cout << (((a+b) == c) ? "YES
" : "NO
");
    }
    return 0;
}