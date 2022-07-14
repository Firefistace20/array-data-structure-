#include <iostream>
using namespace std;
#include <climits>
int
main ()
{
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {

      cin >> a[i];
    }
  int lar = INT_MIN;
  int sec = INT_MIN;
  for (int i = 0; i < n; i++)
    {
      if (a[i] > lar)
	{
	  sec = lar;
	  lar = a[i];
	}
      else if (a[i] > sec && a[i] < lar)
	{
	  sec = a[i];
	}

    }
  cout << "THE SECOND LARGEST ELEMENT IN THE ARRAY IS " << sec << endl;
}
