#include<bits/stdc++.h>
using namespace std;
int main ()
{
      int n, x = 1;
      cin >> n;
      int m[n];
      cin >> m[0];
      for(int i = 1; i < n; i++)
      {
            cin >> m[i];
            if(m[i-1] != m[i])
                  x++;
      }
      cout << x << endl;
      return 0;
}