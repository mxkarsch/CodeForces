#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, b, d, a, sum, ans;
  
  cin >> n >> b >> d;
  
  sum = ans = 0;

  for (int i = 0; i < n; ++i) {
      
     cin >> a;
     
     if (a <= b) {
        sum += a;
     }
     if ( sum > d){
        sum = 0;
        ans++;
     }
  }
  cout << ans << endl;
}
