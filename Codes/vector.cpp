#include <iostream>
#include <vector>
using namespace std;
// Basically vector is similiar to the linked list
int main(){
  // create a vector to store int values
  vector <int> v;
  int i,num;
  cout << "Displaying the size : "<<v.size()<<endl;

  // Entering the values 
  for(int i=0;i<5;i++){
    // cout << "Enter the values" << i+1<<":  ";
    // cin >> num;
    // cout << endl;
    v.push_back(i);
  }
  cout << "Vector size: "<<v.size()<<endl;
  v.insert(v.begin(),100);

  // Displaying the values
  for(int i=0;i<5;i++){
    cout << "The values are"<<(i+1)<<" as follows: "<<v[i]<<endl;
  }
  v.insert(v.begin()+1,2,50);
  for (int i = 0; i < v.size(); i++){
    cout << "The values are" << (i + 1) << " as follows: " << v[i] << endl;
  }
  // cout << v;
  cout << v.pop_back();
  v.clear();
  cout << v.empty();
  return 0;
}