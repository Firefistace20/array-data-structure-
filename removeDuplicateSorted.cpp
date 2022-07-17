#include <iostream>
using namespace std;

 
void
removeDuplicate (int arr[], int n) 
{
  
int res = 0;
  
 
    // traverse elements of arr
    for (int i = 0; i < n - 1; i++)
    
    {
      
	// if ith element is not equal to (i+1)th element, then store ith value in arr[res]
	if (arr[i] != arr[i + 1])
	
	{
	  
arr[res] = arr[i];
	  
res++;
	
}
    
}
  
 
    // store last value of arr in arr[j]
    arr[res++] = arr[n - 1];
  
 
    // print first j elements of array arr
    for (int i = 0; i < res; i++)
    
    {
      
cout << arr[i] << " ";

} 
 
} 
 
int

main () 
{
  
int arr[100], n;
  
cin >> n;
  
for (int i = 0; i < n; i++)
    {
      
cin >> arr[i];
    
} 
 
    // calling function when number of elements in array is greater than 1
    if (n > 1)
    
    {
      
removeDuplicate (arr, n);
    
}
  
 
return 0;

}
