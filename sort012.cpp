

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort012(int a[],int n,int l,int h ){
    int mid=0;
    while(mid<=h){
        //when 0 is present in array we need to swap it with mid and low pointer and increment it 
        if(a[mid]==0){
            swap(a[mid++],a[l++]);
        }
        //when 1 encounter no need to change anything only increment mid it will come automatically in right position we need to swap only 2 and 0 
        else if(a[mid]==1){
            mid++;
        }
        //this is for the if we encounter the 2 then high will be decrement and we will swap the mid and high
        else 
        {
            swap(a[h--],a[mid]);
                
        
        }
    }
}

int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array before sort"<<endl;
     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
    }
    sort012(a,n,0,n-1);
    cout<<endl;
    cout<<"array after  sort "<<endl;
    for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
    }
  

    return 0;
}
