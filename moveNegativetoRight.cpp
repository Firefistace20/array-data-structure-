 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,a[100];
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int i=-1,pivot=0;
     for(int j=0;j<n;j++){
         if(a[j]<pivot){
             i++;
             swap(a[i],a[j]);
         }
     }
     cout<<"ARRAY AFTER NEGATIVE ELEMENTS ARE MOVED TO RIGHT SIDE "<<endl;
      for(int i=0;i<n;i++){
         cout<<" "<<a[i];
     }
  

    return 0;
}
