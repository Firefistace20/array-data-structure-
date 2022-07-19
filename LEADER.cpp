//leader in  ARRAY refer to the if it is greater then all the elements to its  right side. RIGHT SIDE ELEMENT ALWAYS A LEADER   
#include <iostream>

using namespace std;
void
leader (int a[], int n)
{

  int lead = a[n - 1];
  cout << "last element is always a leader " << lead << endl;

  for (int i = n - 2; i >= 0; i--)
    {
      if (lead < a[i])
	{
	  lead = a[i];
	  cout << "The leaders are " << a[i] << endl;
	}
    }
}

int
main ()
{
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];

    }
  leader (a, n);

  return 0;
}
