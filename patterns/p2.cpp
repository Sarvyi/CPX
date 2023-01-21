#include <iostream>
using namespace std;
/*
Understanding the patterns in Cpp
1. basically the outer loop is for the rows and 
2. the inner loop is for the columns
3.
*/

int main(){
  int i,j,k,n;
  cin >> n;
  for(i=0;i<n;i++){
    // for space
    for(k=0;k<n-1-i;k++){
      cout<<"   ";
    }
    for(j=0;j<2*i+1;j++){
      cout<<" * ";
    }
    cout<<endl;
  }
  return 0;
}