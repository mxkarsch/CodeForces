#include <bits/stdc++.h>

using namespace std;

int main()
{

  int c0, c1;
  
  string s;
  
  cin >> s;
  
  c0 = c1 = 1;
  
  for ( int i = 1; i < s.length(); ++i){
      
      if (s[i] == '0' && s[i] == '0') {
          c0++;
          c1 = 0;
      }
      else if (s[i] == '1' && s[i] == '1') {
          c1++;
          c0 = 0;
      }
      if ( c0 >= 7 || c1 >= 7){
          cout << "YES" << endl;
          return 0;
      }
  }
  cout << "NO" << endl;
}
