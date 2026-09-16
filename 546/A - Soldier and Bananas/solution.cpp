#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  k,n,w,x=0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++)
          x += k*i ;
    if(x>n) cout << x-n;
    else cout << 0;
    return 0;
}