
//CUMULATIVE SUM OF AN ARRAY 
#include <iostream>

using namespace std;

int
main ()
{
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

  for (int i = 1; i < n; i++)
    {
      a[i] += a[i - 1];
    }
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }


  return 0;
}
