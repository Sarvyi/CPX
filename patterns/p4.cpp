#include <iostream>
using namespace std;
/*
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 *  *  *  * 
 *  *  * 
 *  * 
 *
 * /

int main(){
  cout<<"Hello new worlds"<<endl;
  int i,j,k,n,starts;
  cin >> n;
  for(i=1;i<=2*n-1;i++){
    starts = i>n? 2*n-i : i;
    for(j=1;j<= starts;j++){
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}