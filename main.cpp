// minimise the diffrence between heights 
#include <iostream>
#include <algorithm>
using namespace std;
int
getMinDiff (int arr[], int n, int k)
{
  std::sort (arr, arr + n);
  int ans = arr[n - 1] - arr[0];
  int small = arr[0] + k;
  int large = arr[n - 1] - k;
  int mi, ma;
  for (int i = 0; i < n - 1; i++)
    {
      mi = std::min (small, arr[i + 1] - k);
      ma = std::max (large, arr[i] + k);
      if (k < 0)
	continue;
      ans = min (ans, ma - mi);

    }
  return ans;

}

int
main ()
{
  int n = 2, k = 3;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int ans = getMinDiff (arr, n, k);
  cout << ans;


  return 0;
}
