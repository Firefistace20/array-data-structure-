/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void
printpair (int a[], int n)
{
  int tot_pair = 0;
  for (int i = 0; i < n; i++)
    {
      int curr = a[i];
      for (int j = i + 1; j < n; j++)
	{
	  cout << "(" << curr << "," << a[j] << ")";
	  tot_pair++;
	}
      cout << endl;
    }
  cout << "The total pair in the array is " << tot_pair;
}

int
main ()
{
  int a[10], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  printpair (a, n);


  return 0;
}
