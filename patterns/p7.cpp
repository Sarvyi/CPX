#include <iostream>
using namespace std;
/*
pattern
A
AB
ABC
ABCD
ABCDE
*/

int main(){
  int i,k,n;
  cin >>n;
  // for(i=0;i<n;i++){
  //   for(char j='A';j<='A'+i;j++){
  //     cout <<j;
  //   }
  //   cout <<endl;
  // }

  // for (i = 0; i < n; i++)
  // {
  //   for (char j='A'; j <'A' + (n-i); j++)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }

  k = 1;
  for (char i ='A'; i<'A'+n; i++)
  {
    /*
A
BB
CCC
DDDD
EEEEE
    */
    for (int j=0; j < k; j++)   
    {
      cout << i;
    }
    k ++;
    cout << endl;
  }
  return 0;
}