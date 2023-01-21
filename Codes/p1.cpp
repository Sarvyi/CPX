#include <iostream>
using namespace std;
int main(){
  int n,i;
  bool is_prime=1;
  cout << "Enter any no which you want to check :";
  cin >> n ;
  is_prime = (is_prime == 0 || is_prime == 1)? 0 : 1;
  for(i=0;i<=n/2;i++){
    if(n%i==0)
      is_prime = 0;
  }
  if(is_prime){
    cout<< "Your input is a prime no";
  }else{
    cout << "Your input is not a prime no";
  }
  return 0;
}