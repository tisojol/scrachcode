#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int low = 0, up = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if((int)s[i]>96) low++;
        else up ++;
    }
    for(int i = 0; i < s.size(); i++)
    {
    if(low >= up) s[i] = tolower(s[i]);
    else s[i] = toupper(s[i]);
    }
    cout << s;
    return 0;
}