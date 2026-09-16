#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x = 0;
    cin >> n;
    while(n > 0)
    {
        if(n >= 100)
        {
            x += n/100;
            n %= 100;
        }
        else if(n >= 20)
        {
            x += n/20;
            n %= 20;
        }
        else if(n >= 10)
        {
            x += n/10;
            n %= 10;
        }
        else if(n >= 5)
        {
            x += n/5;
            n %= 5;
        }
        else
        {
            x += n/1;
            n %= 1;
        }
    }
    cout << x << '
';
    return 0;
}