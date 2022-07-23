

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int
zeroEnd (int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
    {
	   //you have given an array of 0 and 1 in random order move 0 to left side and 1 in right side (sort the array )
       //a[i] != 1 this condition will sort the 0's and 1's array 
	 
      if (a[i] != 0)
	{
	  swap (a[i], a[count]);
	  count++;
	}
    }

  return count;

}

int
main ()
{
  int a[100], n, count;
  cin >> n;
  cout << "Array before " << endl;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

  count = zeroEnd (a, n);
  cout << " Array after zeroes at the end " << endl;
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }


  return 0;
}
