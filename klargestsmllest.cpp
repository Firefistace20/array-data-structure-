

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a[100],n;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int k;
  cin>>k;
  //declaration of the min heap if we want to find the largest k element in array we will use the min heap and vice versa 
  //min element is present in the top of the min heap 
  priority_queue <int, vector<int>, greater<int> > pq;
   
  
  
  //max heap largest element is always in the top thats why we using this to find the smallest because we will pop the largest element every time if the size is greater then k 
  //it will give the k smallest from the array 
  priority_queue<int >max;
  for(int i=0;i<n;i++){
      max.push(a[i]);
      if(max.size()>k){
          max.pop();
      }
  }
  
  
  //it will give the k largest element  from the array 
  for(int i=0;i<n;i++){
      pq.push(a[i]);
      if(pq.size()>k){
          pq.pop();
      }
  }
     cout<<"the k smallest element in array is "<<" " <<max.top()<<endl;
     cout<<"the k largest element is "<<" "<<pq.top()<<endl;
    return 0;
}
