#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n], b[n], x = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(b[i] == a[j])
                x++;
        }
    }
    cout << x << '
';
    return 0;
}