#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    int x = 0;
    for(int i = 0; i < s.size(); i++)
          a[(int)s[i]-97]++;
    for(int i = 0; i < 26; i++)
          if(a[i] != 0) x++;
    if(x%2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}