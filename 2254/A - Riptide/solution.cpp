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
        int a, b, c, x = 0;
        cin >> a >> b >> c;
        while(true)
        {
            if(a == b || b == c || c == a)
                break;
            if(a > b && a > c)
            {
                a--;
                (b > c) ? c++ : b++;
            }
            else if(b > a && b > c)
            {
                b--;
                (a > c) ? c++ : a++;
            }
            else
            {
                c--;
                (a > b) ? b++ : a++;
            }
            x++;
        }
        cout << x << '
';
    }
    return 0;
}