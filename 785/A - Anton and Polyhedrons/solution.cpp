#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x = 0;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s[0] == 'I') x += 20;
        else if(s[0] == 'C') x += 6;
        else if(s[0] == 'T') x += 4;
        else if(s[0] == 'D') x += 12;
        else x += 8;
    }
    cout << x << '
';
    return 0;
}