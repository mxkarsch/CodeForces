#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, ans;
  cin >> n;
  
  string s;
  cin >> s;
  
  ans = 0;
  
  for (int i = 1; i < n; ++i)
  {
     if (s[i] == s[i-1])
       ans++;
  }
  
  cout << ans << endl; 
}
