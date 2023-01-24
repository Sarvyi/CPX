#include <bits/stdc++.h>
using namespace std;

int main()
{
  time_t start, end;  // This is for calculating the time at the starting point
  time(&start);
  // ios_base::sync_with_stdio(false);

  unordered_set<int> s;
  for (int i = 1; i <= 10; i++)
  {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  
  int n = 2;
  int search;
  cout << "Enter the element you want to search: \n";
  cin >> search;
  if (s.find(search)) != s.end())
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;
  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
  

  time(&end); // This is for ending the timestamp
  double time_taken = double(end - start);
  cout << "Time taken by program is : " << fixed
       << time_taken << setprecision(5);
  cout << " sec " << endl;
}