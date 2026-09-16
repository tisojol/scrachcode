#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    if(n%2 == 0)
        (n/2 < k) ? cout << (k-n/2)*2 << endl : cout << k*2-1 << endl;
    else
        ((n+1)/2 < k) ? cout << (k-(n+1)/2)*2 << endl : cout << k*2-1 << endl;
    return 0;
}