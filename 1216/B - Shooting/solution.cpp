#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , b[n],p = 0, x = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(a[j] < a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++)
        x += a[i]*i + 1;
    cout << x << endl;
    for(int i = 0; i < n; i++)
        cout << b[i] + 1 << " ";
    return 0;
}