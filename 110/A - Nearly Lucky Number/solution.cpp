#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s;
    cin >> s;
    int x = 0;
    for(int i=0; i<18; i++)
    { 
        if(s%10 == 4 || s%10 == 7) x++;
        s /= 10;
    }
    if(x == 4 || x == 7) cout << "YES";
    else cout << "NO";
    return 0;
 }