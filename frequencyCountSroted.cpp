
//count the frequency of the element in array 
//this solution worked for both sorted and unsorted array 
#include <bits/stdc++.h>
  using namespace std;

 
// It prints number of
// occurrences of each element in the array.
  void
findFrequency (int arr[], int n) 
{
  
    // HashMap to store frequencies
  map < int, int >mp;
  
 
    // traverse the array
    for (int i = 0; i < n; i++)
    {
      
	// update the frequency
	mp[arr[i]]++;
    
} 
 
    // traverse the hashmap
for (auto i:mp)
    {
      
cout << "Element " << i.first << " occurs " 
	<<i.second << " times" << endl;
    
}

}


 
// Driver function
  int
main () 
{
  
int arr[100], n;
  
cin >> n;
  
for (int i = 0; i < n; i++)
    {
      
cin >> arr[i];
    
} 
findFrequency (arr, n);
  
 
return 0;

}
