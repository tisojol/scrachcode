#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a[n], x = 0, y = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] <= h) x++;
        else y += 2;
    }
    cout << x+y;
    return 0;
}