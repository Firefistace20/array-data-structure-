

#include <iostream>

using namespace std;
void
rev (int a[], int start, int end)
{

  int n;
  while (start <= end)
    {
      swap (a[start], a[end]);
      start++;
      end--;

    }
}

void
leftrot (int a[], int n, int d)
{
  rev (a, 0, d - 1);
  rev (a, d, n - 1);
  rev (a, 0, n - 1);

}

int
main ()
{
  int a[100], n, d;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  cout << "How many place you want to left rotate " << endl;
  cin >> d;
  cout << "array after the D rotation " << endl;
  leftrot (a, n, d);

  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }


  return 0;
}
