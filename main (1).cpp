//calculating mid point and store it on diffrent array 
#include <iostream>

using namespace std;
void
removeMid (int a[], int n, int b[])
{

  int right, left;
  int i = 0;
  int mid = n / 2;
  if (n % 2 != 0)
    {

      b[mid] = a[i];
      left = mid - 1;
      right = mid + 1;
      i++;
    }
  else
    {
      left = mid - 1;
      right = mid;
    }


  while (i < n)
    {
      b[left] = a[i];
      left--;
      i++;
      b[right] = a[i];
      right++;
      i++;
    }

}

int
main ()
{
  int n;
  cin >> n;
  int a[100], b[100];
  cout << "main";
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  removeMid (a, n, b);
  for (int i = 0; i < n; i++)
    {
      cout << b[i] << "  ";
    }




  return 0;
}
