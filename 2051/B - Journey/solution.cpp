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
        int n, a[3],b[3];
        cin >> n >> a[0] >> a[1] >> a[2];
        b[0] = a[0];
        b[1] = b[0]+a[1];
        b[2] = b[1]+a[2];
        int k = n/b[2] * 3;
        if(n%b[2] == 0)
            cout << k << '
';
        else
        {
            if(n%b[2] == b[0] || n%b[2] < b[0])
            k++;
        else if(n%b[2] == b[1] || n%b[2] < b[1])
            k += 2;
        else
            k += 3;
        cout << k << '
';
        }
        
    }
    return 0;
}
 