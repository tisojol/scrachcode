#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, e = 0, ei, o = 0, oi;
    while(i < n)
    {
        if(a[i]%2 == 0)
        {
            e++;
            ei = i+1;
        }
        else
        {
            o++;
            oi = i+1;
        }
        i++;
    }
    (e == 1) ? cout << ei << '
' : cout << oi << '
';
    return 0;
}