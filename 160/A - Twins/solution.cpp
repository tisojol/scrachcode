#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x = 0;
    cin >> n;
    int a[n], b[n] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i = 0; i < n; i++)
        b[i] = (i == 0) ? a[i] : b[i-1] + a[i]; 
    if(a[0] > x/2)
    {
        cout << "1" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(x/2 < b[i])
        {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}