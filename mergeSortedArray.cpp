#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void  mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1, p2 = n-1 , i = m + n -1;
        while (p2 >= 0){
            if(p1 >= 0 && nums1[p1] > nums2[p2]){
                nums1[i--]=nums1[p1--];
            }
            else{
                nums1[i--]=nums2[p2--];
            }
        }
   
        
    }
        
    
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int m,n;
    cin>>m;
    int val;
    for(int i=0;i<m;i++){ 
        cin>>val;
        nums1.push_back(val);
    }
    cin>>n;
    int val_2;
    for(int i=0;i<n;i++){
        cin>>val_2;
        nums2.push_back(val_2);
    }
    merge(nums1,m,nums2,n);
    
     for(int i=0;i<m+n;i++){
         cout<<nums1[i]<<" ";
     }

    return 0;
}