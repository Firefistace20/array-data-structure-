 //the maximum difference between any two elements such that larger element appears after the smaller number. 
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int  maxDifference(int a[],int n){
    
    int maxDiff=a[1]-a[0],minval=a[0];
   
    
    for(int j=1;j<n;j++){
        maxDiff=max(maxDiff,a[j]-minval);
        minval=min(minval,a[j]);
        }
        return maxDiff;
    }

int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    int maxDiff=maxDifference
    (a,n);
    std::cout<<"THE MAXIMUM DIFFRENCE IS " << maxDiff << std::endl;

    return 0;
}
