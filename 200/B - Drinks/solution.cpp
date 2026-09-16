#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], y = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        y += a[i];
    double x = (double)y/n;
    cout << fixed << setprecision(12) << x << endl;
    return 0;
}