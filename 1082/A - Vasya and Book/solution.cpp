#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y, d, p = 0;
        cin >> n >> x >> y >> d;
        if(abs(x-y)%d == 0)
            cout << abs(x-y)/d << endl;
        else
        {
            int a = 2e9, b = 2e9;
            if((y-1)%d == 0)
                a = (x+d-2)/d + (y-1)/d;
            if((n-y)%d == 0)
                b = ((n-x+d-1)/d) + (n-y)/d;
            int best = min(a,b);
            (best == 2e9) ? cout << -1 << endl : cout << best << endl;
        }
    }
    return 0;
}
 