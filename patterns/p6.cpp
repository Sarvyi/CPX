#include <bits/stdc++.h>
using namespace std;
/*
  Pattern:
1              1
12            21
123          321
1234        4321
12345      54321
123456    654321
1234567  7654321
1234567887654321
*/

int main(){
  int i,j,k,n;
  string s = " ";
  cin >> n;
  for(i=1;i<=n;i++){
    for(j=1;j<=2*n;j++){
      k = i;
      if (j <= i){
        cout << j;
      } else if ((2*n - j) < i){
        cout << 2*n-j+1;
      }
      else
      {
        // cout << s*(n-i-1)*2
        cout << s;
      }
      // cout << j;
    }
    cout<<endl;
  }
  return 0;
}