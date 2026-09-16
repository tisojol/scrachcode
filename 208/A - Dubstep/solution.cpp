#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<string> words;
    string wub = "WUB";
 
    int i = 0;
    while(i < s.size())
    {
        if(s.substr(i, 3) == wub)
            i += 3;
        else
        {
            string word = "";
            while(i < s.size() && s.substr(i, 3) != wub)
            {
                word += s[i];
                i++;
            }
            if(!word.empty())
                words.push_back(word);
        }
    }
 
    for(int j = 0; j < words.size(); j++)
    {
        if(j)
            cout << " ";
        cout << words[j];
    }
    cout << endl;
 
    return 0;
}