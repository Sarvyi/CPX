#include <iostream>
using namespace std;
int main(){
  int i,j,k,n;
  cin>>n;
  for(i=0;i<n;i++){
    k = (i % 2 == 0) ? 1 : 0;
    for(j=0;j<=i;j++){
      cout << k<<" ";
      // k = (k==1)?0:1;
      k = 1 - k;
    }
    cout<<endl;
  }
  return 0;
}