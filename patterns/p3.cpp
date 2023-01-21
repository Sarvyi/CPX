#include <iostream>
using namespace std;
int main()
{
  int i, j, k, n;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    // for space
    for (k = 0; k < i; k++)
    {
      cout << "   ";
    }
    for (j = 0; j < 2 * (n-i) - 1; j++)
    {
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}