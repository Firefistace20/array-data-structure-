

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
  priority_queue<int >max;
  for(int i=0;i<n;i++){
      max.push(a[i]);
      if(max.size()>k){
          max.pop();
      }
  }
     cout<<max.top();
    return 0;
}
