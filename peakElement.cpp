#include <bits/stdc++.h>
using namespace std;

//Function to find peak element

//a peak element is whose value is greaer then the adjacent of its  neighbour elements  
//Modified Binary search TC=>log(n) 
  int
FindPeak (int array[], int low, int high, int n) 
{
  
int mid = low + high / 2;
  
    //return mid 
    //If mid is greater than neighbours or mid = 0
    //If neighbours exist
    if ((mid == 0 || array[mid - 1] <= array[mid])
	&& (mid == n - 1 || array[mid + 1] <= array[mid]))
    
    {
      
return mid;
    
}
  
    //If mid is not peak and its right neighbour is greater.
    //then search in right half 
    else if (mid > 0 && array[mid - 1] < array[mid])
    
    {
      
return FindPeak (array, (mid + 1), high, n);
    
}
  
    //If mid is not peak and its left neighbour is greater.
    //then search in left half
    else
    
    {
      
return FindPeak (array, low, (mid - 1), n);
    
}

}


int
main () 
{
  
int n;
  
cin >> n;
  
int a[n];
  
for (int i = 0; i < n; i++)
    
    {
      
cin >> a[i];
    
} 
int index = FindPeak (a, 0, n - 1, n);
  
cout << a[index] << endl;
  
return 0;

}


